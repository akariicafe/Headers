@protocol WFErrorProviderContext;

@interface WFErrorAlertController : UIAlertController <WFNetworkView>

@property (retain, nonatomic) id<WFErrorProviderContext> context;
@property (readonly, nonatomic) BOOL wantsModalPresentation;

+ (id)errorAlertControllerWithContext:(id)a0;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
