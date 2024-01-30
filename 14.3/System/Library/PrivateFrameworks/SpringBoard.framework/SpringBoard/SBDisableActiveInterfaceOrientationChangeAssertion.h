@class NSString;

@interface SBDisableActiveInterfaceOrientationChangeAssertion : NSObject <BSInvalidatable> {
    NSString *_reason;
    BOOL _invalidated;
    BOOL _nudge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithReason:(id)a0 nudgeOrientationOnInvalidate:(BOOL)a1;

@end
