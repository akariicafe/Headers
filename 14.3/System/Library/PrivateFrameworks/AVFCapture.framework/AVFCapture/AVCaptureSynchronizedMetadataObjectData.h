@class NSArray, AVCaptureSynchronizedMetadataObjectDataInternal;

@interface AVCaptureSynchronizedMetadataObjectData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedMetadataObjectDataInternal *_internal;
}

@property (readonly) NSArray *metadataObjects;

+ (void)initialize;

- (id)_initWithMetadataObjects:(id)a0;
- (void)dealloc;

@end
