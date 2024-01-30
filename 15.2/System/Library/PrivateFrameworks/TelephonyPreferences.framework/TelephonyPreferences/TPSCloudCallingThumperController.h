@class NSString, NSDictionary, CTXPCServiceSubscriptionContext, TUSenderIdentityCapabilities, TPSCarrierBundleController;
@protocol TPSCloudCallingThumperControllerDelegate;

@interface TPSCloudCallingThumperController : NSObject

@property (retain, nonatomic) TPSCarrierBundleController *carrierBundleController;
@property (copy, nonatomic) NSDictionary *encryptedIdentityInfo;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (retain, nonatomic) TUSenderIdentityCapabilities *subscriptionCapabilities;
@property (weak, nonatomic) id<TPSCloudCallingThumperControllerDelegate> delegate;
@property (nonatomic, getter=isThumperCallingEnabled) BOOL thumperCallingEnabled;
@property (readonly, nonatomic) BOOL supportsThumperCalling;
@property (readonly, copy, nonatomic) NSString *localizedCarrierName;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSubscriptionContext:(id)a0;

@end
