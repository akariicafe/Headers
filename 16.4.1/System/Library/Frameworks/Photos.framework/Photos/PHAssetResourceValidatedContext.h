@class NSURL, NSData, PHExternalAssetResource;

@interface PHAssetResourceValidatedContext : NSObject

@property (readonly, nonatomic) PHExternalAssetResource *resource;
@property (readonly, nonatomic) NSURL *validatedURL;
@property (readonly, nonatomic) NSData *validatedData;

- (void).cxx_destruct;
- (id)initWithResource:(id)a0 validatedURL:(id)a1 validatedData:(id)a2;

@end
