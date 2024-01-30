@class NSArray, AVCaptureSynchronizedMetadataObjectDataInternal;

@interface AVCaptureSynchronizedMetadataObjectData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedMetadataObjectDataInternal *_internal;
}

@property (readonly) NSArray *metadataObjects;

+ (void)initialize;

- (void)dealloc;
- (id)_initWithMetadataObjects:(id)a0;

@end
