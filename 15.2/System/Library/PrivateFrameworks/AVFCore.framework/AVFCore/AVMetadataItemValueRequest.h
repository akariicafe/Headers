@class AVMetadataItemValueRequestInternal, AVMetadataItem;

@interface AVMetadataItemValueRequest : NSObject {
    AVMetadataItemValueRequestInternal *_valueRequest;
}

@property (readonly, weak) AVMetadataItem *metadataItem;

+ (id)metadataItemValueRequestWithMetadataItem:(id)a0;

- (id)dataType;
- (id)initWithMetadataItem:(id)a0;
- (void)respondWithValue:(id)a0 dataType:(id)a1;
- (void)respondWithValue:(id)a0;
- (void)respondWithError:(id)a0;
- (id)value;
- (id)error;
- (void)dealloc;

@end
