@class NSString, SBDeviceOrientationUpdateManager;

@interface SBDeviceOrientationUpdateDeferralAssertion : NSObject <BSInvalidatable>

@property (weak, nonatomic, setter=_setHackyBackReference:) SBDeviceOrientationUpdateManager *hackyBackReference;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReason:(id)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
