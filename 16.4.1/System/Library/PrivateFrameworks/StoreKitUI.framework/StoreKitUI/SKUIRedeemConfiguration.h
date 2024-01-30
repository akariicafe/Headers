@class SKUIClientContext, NSOperationQueue, UIImage, SKUIITunesPassConfiguration;

@interface SKUIRedeemConfiguration : NSObject

@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) UIImage *inputImage;
@property (readonly, nonatomic) UIImage *landingImage;
@property (readonly, nonatomic) UIImage *successImage;
@property (readonly, nonatomic) SKUIITunesPassConfiguration *ITunesPassConfiguration;

- (void).cxx_destruct;
- (id)initWithOperationQueue:(id)a0 category:(long long)a1 clientContext:(id)a2;
- (void)_setInputImage:(id)a0;
- (void)_didLoadWithResponseDictionary:(id)a0;
- (id)_redeemPreflightRequestBodyData;
- (void)_loadConfigurationWithURLBagDictionary:(id)a0 completionBlock:(id /* block */)a1;
- (void)_loadDefaultImages;
- (void)_setLandingImage:(id)a0;
- (void)_setSuccessImage:(id)a0;
- (void)loadConfigurationWithCompletionBlock:(id /* block */)a0;

@end
