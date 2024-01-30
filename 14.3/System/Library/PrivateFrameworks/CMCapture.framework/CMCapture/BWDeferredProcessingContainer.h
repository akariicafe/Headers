@class BWPhotoManifest, NSObject;
@protocol OS_dispatch_queue;

@interface BWDeferredProcessingContainer : BWDeferredContainer {
    NSObject<OS_dispatch_queue> *_metadataPrefetchQueue;
    NSObject<OS_dispatch_queue> *_bufferPrefetchQueue;
}

@property (readonly, nonatomic) unsigned int ageSeconds;
@property (readonly, nonatomic) unsigned long long sizeBytes;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) BWPhotoManifest *photoManifest;

- (id)copyDictionaryForTag:(id)a0 err:(int *)a1;
- (id)copyAttributesForBufferType:(unsigned long long)a0 portType:(id)a1 err:(int *)a2;
- (BOOL)hasBufferForType:(unsigned long long)a0 portType:(id)a1;
- (int)_buildFolderStatistics;
- (int)_buildRemoteStatistics:(id)a0 intermediatesSize:(unsigned long long)a1;
- (id)_copyObjectForTag:(id)a0 customClasses:(id)a1 err:(int *)a2;
- (struct __CVBuffer { } *)copyBufferForTag:(id)a0 err:(int *)a1;
- (id)copyMetadataForTag:(id)a0 err:(int *)a1;
- (id)copyMetadataForBufferTag:(id)a0 err:(int *)a1;
- (id)copyArrayForTag:(id)a0 customClasses:(id)a1 err:(int *)a2;
- (struct __CVBuffer { } *)copyBufferForType:(unsigned long long)a0 portType:(id)a1 metadata:(id *)a2 err:(int *)a3;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)a0 applicationID:(id)a1 captureRequestIdentifier:(id)a2 baseFolderURL:(id)a3 err:(int *)a4;
- (id)initWithApplicationID:(id)a0 captureRequestIdentifier:(id)a1 baseFolderURL:(id)a2 err:(int *)a3;

@end
