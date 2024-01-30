@class NSString, SBSStatusBarStyleOverridesAssertionData;

@interface SBSStatusBarStyleOverridesAssertion : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertionData *assertionData;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) unsigned long long statusBarStyleOverrides;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic, getter=isExclusive) BOOL exclusive;
@property (readonly, nonatomic) BOOL showsWhenForeground;
@property (copy, nonatomic) NSString *statusString;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assertionWithStatusBarStyleOverrides:(unsigned long long)a0 forPID:(int)a1 exclusive:(BOOL)a2 showsWhenForeground:(BOOL)a3;
+ (id)backgroundLocationAssertionForPID:(int)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)acquireWithHandler:(id /* block */)a0 invalidationHandler:(id /* block */)a1;
- (void)acquireWithHandler:(id /* block */)a0 onQueue:(id)a1;
- (id)initWithStatusBarStyleOverrides:(unsigned long long)a0 forPID:(int)a1 exclusive:(BOOL)a2 showsWhenForeground:(BOOL)a3;
- (id)initWithStatusBarStyleOverridesAssertionData:(id)a0;

@end
