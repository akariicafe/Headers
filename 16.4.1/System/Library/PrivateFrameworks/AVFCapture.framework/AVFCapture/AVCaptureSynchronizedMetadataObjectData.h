@class NSArray, AVCaptureSynchronizedMetadataObjectDataInternal;

@interface AVCaptureSynchronizedMetadataObjectData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedMetadataObjectDataInternal *_internal;
}

@property (readonly) NSArray *metadataObjects;

+ (void)initialize;

- (void)dealloc;
- (id)_initWithMetadataObjectCollection:(id)a0;
- (void)addSynchronizedData:(id)a0;
- (id)handledMetadataObjectTypes;

@end
