@class NSString;

@interface _SBUIPresentableDismissalPreventionAssertion : NSObject <SBUIPresentableDismissalPreventionAssertion> {
    id /* block */ _invalidationHandler;
}

@property (readonly, nonatomic) long long dismissalSource;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isValidBannerDismissalSource:(long long)a0;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDismissalSource:(long long)a0 reason:(id)a1 invalidationHandler:(id /* block */)a2;

@end
