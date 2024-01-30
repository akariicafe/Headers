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

- (void)dealloc;
- (id)initWithReason:(id)a0 nudgeOrientationOnInvalidate:(BOOL)a1;
- (void)invalidate;
- (void).cxx_destruct;

@end
