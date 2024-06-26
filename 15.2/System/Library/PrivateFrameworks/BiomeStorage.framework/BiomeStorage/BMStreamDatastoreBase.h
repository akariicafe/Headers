@class _PASLock, NSString, BMFrameStore, BMPruningPolicy, BMStreamMetadata, BMStoreConfig;

@interface BMStreamDatastoreBase : NSObject {
    unsigned long long _maxFileSize;
    BOOL _isTombstone;
    BMStreamMetadata *_metadata;
    Class _eventDataClass;
    id _lockStateChangeRegistration;
    _PASLock *_deviceLockStateLock;
}

@property (readonly, nonatomic) unsigned long long permission;
@property (readonly, nonatomic) unsigned long long datastoreVersion;
@property (readonly, nonatomic) unsigned long long maxFileSize;
@property (readonly, nonatomic) NSString *streamPath;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) NSString *remoteStreamName;
@property (readonly, nonatomic) BMPruningPolicy *pruningPolicy;
@property (readonly, copy, nonatomic) NSString *streamId;
@property (readonly, nonatomic) BOOL canReadOrPruneData;
@property (retain, nonatomic) BMFrameStore *framesStore;
@property (readonly, nonatomic) BMStreamMetadata *metadata;
@property (readonly, nonatomic) BMStoreConfig *config;

+ (unsigned long long)indexOfSegmentContainingEventTime:(double)a0 fromSegments:(id)a1;
+ (id)orderedSegmentsInDirectory:(id)a0 includeZeroSizeSegments:(BOOL)a1;
+ (id)fileNameWithTimestamp:(double)a0;
+ (double)timestampWithFilename:(id)a0;
+ (long long)fileSizeOfURL:(id)a0;

- (Class)eventBodyClass;
- (void)eventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 shouldDeleteUsingBlock:(id /* block */)a3;
- (id)newEnumeratorFromBookmark:(id)a0;
- (id)newEnumeratorFromStartTime:(double)a0;
- (id)newEnumeratorFromStartTime:(double)a0 options:(unsigned long long)a1;
- (id)fetchEventsFrom:(double)a0 to:(double)a1 options:(unsigned long long)a2;
- (void)syncMappedFiles;
- (id)newEnumeratorFromBookmark:(id)a0 options:(unsigned long long)a1;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;
- (id)_bookmarkWithSegmentName:(id)a0 offset:(unsigned long long)a1;
- (BOOL)removeFrameStoreFileWithSegmentName:(id)a0;
- (void)removeEventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 pruneFutureEvents:(BOOL)a3 usingBlock:(id /* block */)a4;
- (void)pruneStreamToMaxSegmentAge:(double)a0;
- (id)segmentWithFilename:(id)a0 error:(id *)a1;
- (void)updateSegmentsWithGuardedDeviceLockStateData:(id)a0;
- (id)initWithStream:(id)a0 streamPath:(id)a1 permission:(unsigned long long)a2 config:(id)a3;
- (id)newEnumeratorFromStartTime:(double)a0 endTime:(double)a1 options:(unsigned long long)a2;
- (id)segmentNames;
- (id)nextSegmentAfterFrameStore:(id)a0 segmentNames:(id)a1 direction:(unsigned long long)a2;
- (BOOL)updateMetadata:(Class)a0 pruningPolicy:(id)a1;
- (BOOL)saveMetadata:(id)a0;
- (id)metadataPath;
- (id)segmentAfterFrameStore:(id)a0 createNewSegment:(BOOL)a1 direction:(unsigned long long)a2;
- (void)didMarkFrameAsRemovedWithSegmentName:(id)a0 frame:(id)a1 reason:(unsigned long long)a2 outTombstoneBookmark:(id *)a3;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1;
- (id)effectiveStreamPath;
- (void)handleDeviceLocking;
- (id)segmentWithFilename:(id)a0 segmentNames:(id)a1 segmentFileHandles:(id)a2 createNewFile:(BOOL)a3 error:(id *)a4;
- (void)removeEventsFrom:(double)a0 to:(double)a1 pruneFutureEvents:(BOOL)a2 shouldDeleteUsingBlock:(id /* block */)a3;
- (unsigned long long)streamSizeInBytes;
- (void)pruneStreamToMaxStreamSizeInBytes:(unsigned long long)a0;
- (void)reverseEnumerateSegmentsFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (BOOL)writeEventBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3;
- (void)reverseEnumerateSegmentsNamesFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (BOOL)writeEventWithEventBody:(id)a0;
- (void)enumerateSegmentsFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (id)newFramestoreWithTime:(double)a0 segmentNames:(id)a1 segmentFileHandles:(id)a2;
- (void).cxx_destruct;
- (BOOL)deleteEventAtBookmark:(id)a0 outTombstoneBookmark:(id *)a1;
- (void)removeEventsFrom:(double)a0 to:(double)a1 pruneFutureEvents:(BOOL)a2 usingBlock:(id /* block */)a3;
- (id)_localStreamPath;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1 outBookmark:(id *)a2;
- (id)newFramestoreWithTime:(double)a0;
- (void)updateSegments;
- (id)filelockPath;
- (BOOL)writeEventBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3 outBookmark:(id *)a4;
- (id)newEnumeratorFromStartTime:(double)a0 endTime:(double)a1 maxEvents:(unsigned long long)a2 lastN:(unsigned long long)a3 options:(unsigned long long)a4;
- (id)newEnumeratorFromStartTime:(double)a0 endTime:(double)a1 maxEvents:(unsigned long long)a2 options:(unsigned long long)a3;
- (id)fileHandleForFile:(id)a0 createNewFile:(BOOL)a1 error:(id *)a2;
- (BOOL)writeEventData:(id)a0 dataVersion:(unsigned int)a1 timestamp:(double)a2 outBookmark:(id *)a3;
- (void)enumerateEventsFrom:(double)a0 to:(double)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)initWithStream:(id)a0 permission:(unsigned long long)a1 config:(id)a2;
- (id)frameStoreOfSegmentContainingEventTime:(double)a0;
- (BOOL)writeEventData:(id)a0 dataVersion:(unsigned int)a1 timestamp:(double)a2;
- (void)fetchEventFromFrameStore:(id)a0 atOffset:(unsigned long long)a1 withOptions:(unsigned long long)a2 callback:(id /* block */)a3;
- (id)loadMetadata;
- (BOOL)_segmentStillExists:(id)a0;
- (BOOL)isNotLastSegment:(id)a0;
- (void)dealloc;
- (void)eventsFrom:(double)a0 to:(double)a1 shouldDeleteUsingBlock:(id /* block */)a2;
- (id)_remoteStreamPath;
- (void)didMarkFrameAsRemovedWithSegmentName:(id)a0 frame:(id)a1 reason:(unsigned long long)a2;
- (void)handleDeviceUnlock;
- (id)filePathForFilename:(id)a0;
- (void)openFiles:(id)a0 saveToOpenFiles:(id)a1;
- (id)segmentAfterFrameStore:(id)a0 createNewSegment:(BOOL)a1;
- (unsigned long long)segmentFileSize:(id)a0;
- (void)enumerateSegmentsNamesFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (BOOL)updateMetadata:(Class)a0;
- (BOOL)shouldCacheFileDescriptors;
- (void)removeEventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 pruneFutureEvents:(BOOL)a3 shouldDeleteUsingBlock:(id /* block */)a4;

@end
