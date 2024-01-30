@class NSArray, NSString, NSMutableDictionary;

@interface BWPhotoManifest : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferPtrValueToPhotoDescriptorLock;
    NSMutableDictionary *_bufferPtrValueToPhotoDescriptor;
}

@property (readonly, nonatomic) NSArray *photoDescriptors;
@property (readonly, nonatomic) NSString *captureRequestIdentifier;

- (id)descriptorForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithDescriptors:(id)a0 captureRequestIdentifier:(id)a1;
- (id)description;
- (id)descriptorForIdentifier:(id)a0;
- (void)dealloc;

@end
