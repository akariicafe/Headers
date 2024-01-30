@class NSString, BMFrameStore, NSMutableOrderedSet, BMStreamMetadata;

@interface BMStreamDatastore : NSObject {
    unsigned long long _permission;
    unsigned long long _datastoreVersion;
    unsigned long long _maxFileSize;
    NSString *_streamPath;
    NSMutableOrderedSet *_segmentNames;
    BMStreamMetadata *_metadata;
}

@property (retain, nonatomic) BMFrameStore *framesStore;
@property (readonly, nonatomic) NSString *streamId;

+ (double)timestampWithFilename:(id)a0;
+ (long long)fileSizeOfURL:(id)a0;
+ (unsigned long long)indexOfSegmentContainingEventTime:(double)a0 fromSegments:(id)a1;
+ (id)orderedSegmentsInDirectory:(id)a0 includeZeroSizeSegments:(BOOL)a1;
+ (id)newFileNameWithTimestamp:(double)a0;

- (id)copyNextSegmentAfterIndex:(long long *)a0;
- (id)newEnumeratorFromStartTime:(double)a0;
- (id)newFramestoreWithTime:(double)a0;
- (id)initWithStream:(id)a0 permission:(unsigned long long)a1 config:(id)a2;
- (void)nextEventFromFrameStore:(id)a0 withOffset:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)initForWritingWithStream:(id)a0 config:(id)a1;
- (id)copySegmentWithFilename:(id)a0 error:(id *)a1;
- (void)removeEventsFrom:(double)a0 to:(double)a1 pruneFutureEvents:(BOOL)a2 usingBlock:(id /* block */)a3;
- (BOOL)writeEventClass:(Class)a0;
- (void)dealloc;
- (id)initForPruningWithStream:(id)a0 config:(id)a1;
- (void)eventsFrom:(double)a0 to:(double)a1 shouldDeleteUsingBlock:(id /* block */)a2;
- (void)enumerateEventsFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (BOOL)writeEventData:(id)a0 dataVersion:(unsigned int)a1 timestamp:(double)a2;
- (BOOL)updateWithNewSegmentNames;
- (id)loadMetadata;
- (void)pruneStreamToMaxStreamSizeInBytes:(unsigned long long)a0;
- (id)filelockPath;
- (BOOL)tryToAddTypeInfoToStoreEvent:(id)a0;
- (id)newFrameStoreOfSegmentContainingEventTime:(double)a0;
- (unsigned long long)streamSizeInBytes;
- (BOOL)removeFrameStoreFileWithSegmentName:(id)a0;
- (id)newEnumeratorFromBookmark:(id)a0;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1;
- (id)copySegmentAfterFrameStore:(id)a0 createNewSegment:(BOOL)a1;
- (unsigned long long)maxFileSize;
- (void)enumerateSegmentsFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (id)_localStreamPath;
- (BOOL)writeEventBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3;
- (id)initWithStream:(id)a0 streamPath:(id)a1 permission:(unsigned long long)a2 config:(id)a3;
- (Class)eventClass;
- (id)initForReadingWithStream:(id)a0 config:(id)a1;
- (BOOL)shouldRemoveEmptyFrameStoreFromSegmentName:(id)a0;
- (BOOL)writeEventWithEventBody:(id)a0;
- (id)segmentNames;
- (void)syncMappedFiles;
- (id)metadataPath;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;
- (long long)indexForFrameStoreAfterFrameStore:(id)a0;
- (BOOL)saveMetadata:(id)a0;
- (void)fetchEventsFrom:(double)a0 to:(double)a1 callback:(id /* block */)a2;

@end
