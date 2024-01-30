@class NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface BWDeferredCaptureContainer : BWDeferredContainer {
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSObject<OS_dispatch_group> *_flushGroup;
    BOOL _flushBuffersUponCommit;
    BOOL _foldersCreated;
    BOOL _preflushed;
    NSDate *_commitTime;
}

@property (readonly, nonatomic) BOOL committed;
@property (nonatomic) BOOL cached;
@property (nonatomic) unsigned long long cacheExpiryTime;
@property (readonly, nonatomic) long long commitDurationNS;
@property (readonly, nonatomic) long long flushDurationNS;

+ (id)timeForManifest:(id)a0 index:(unsigned long long)a1;
+ (id)captureRequestIdentifierForManifest:(id)a0;

- (int)abort;
- (int)flush;
- (int)commit;
- (int)preflush;
- (void)dealloc;
- (id)initWithApplicationID:(id)a0 captureRequestIdentifier:(id)a1 baseFolderURL:(id)a2 flushBuffersUponCommit:(BOOL)a3 err:(int *)a4;
- (int)waitForFlush;
- (id)copyXPCEncoding:(int *)a0;
- (int)commitCaptureSettings:(id)a0 settings:(id)a1;
- (int)commitPhotoDescriptor:(id)a0;
- (int)commitDictionary:(id)a0 tag:(id)a1;
- (int)commitBuffer:(struct __CVBuffer { } *)a0 tag:(id)a1 bufferType:(unsigned long long)a2 compressionProfile:(int)a3 metadataTag:(id)a4 portType:(id)a5;
- (int)commitMetadata:(id)a0 tag:(id)a1 bufferTag:(id)a2;
- (int)commitArray:(id)a0 tag:(id)a1;

@end
