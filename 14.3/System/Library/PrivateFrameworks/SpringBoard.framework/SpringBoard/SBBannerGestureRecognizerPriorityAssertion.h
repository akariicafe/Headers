@class NSString;

@interface SBBannerGestureRecognizerPriorityAssertion : NSObject <BSInvalidatable> {
    id /* block */ _invalidationHandler;
    id /* block */ _enablementChangeHandler;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidBannerGestureRecognizerPriority:(long long)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithPriority:(long long)a0 reason:(id)a1 invalidationHandler:(id /* block */)a2 enablementChangeHandler:(id /* block */)a3;

@end
