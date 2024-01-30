@class NSString;

@interface AMSUIWebSubscriptionAction : NSObject <AMSUIWebActionRunnable>

@property (nonatomic) long long cachePolicy;
@property (nonatomic) BOOL extendedCarrierCheck;
@property (nonatomic) long long mediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
