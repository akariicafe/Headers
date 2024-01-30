@class NSString;
@protocol CCUIContentModuleContextDelegate;

@interface CCUIContentModuleContext : NSObject

@property (readonly, copy, nonatomic) NSString *moduleIdentifier;
@property (weak, nonatomic) id<CCUIContentModuleContextDelegate> delegate;

+ (void)initialize;
+ (id)_sharedOpenAppService;
+ (void)performWithoutAnimationWhileHidden:(id /* block */)a0;
+ (void)performWithoutAnimationWhileHiddenInWindow:(id)a0 actions:(id /* block */)a1;
+ (void)setAnimationsPermitted:(BOOL)a0 inWindow:(id)a1;
+ (BOOL)areAnimationsPermittedInWindow:(id)a0;
+ (id)_sharedOpenApplicationOptions;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)openApplication:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestExpandModule;
- (void)enqueueStatusUpdate:(id)a0;
- (void)dismissModule;
- (id)sensorActivityDataForActiveSensorType:(unsigned long long)a0;
- (struct CCUIModuleLayoutSize { unsigned long long x0; unsigned long long x1; })moduleLayoutSizeForOrientation:(long long)a0;
- (void)setHomeGestureDismissalAllowed:(BOOL)a0;
- (void)requestAuthenticationWithCompletionHandler:(id /* block */)a0;
- (void)requestLayoutSizeUpdate;
- (id)initWithModuleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dismissControlCenter;
- (void)openApplication:(id)a0 completionHandler:(id /* block */)a1;

@end
