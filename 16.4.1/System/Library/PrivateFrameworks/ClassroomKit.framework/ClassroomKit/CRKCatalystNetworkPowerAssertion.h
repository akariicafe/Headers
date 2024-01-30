@interface CRKCatalystNetworkPowerAssertion : NSObject <CATCancelable>

@property (nonatomic, getter=isCanceled) BOOL canceled;

- (void)cancel;
- (void)dealloc;

@end
