@class NSString;
@protocol CCUIContentModuleContextDelegate;

@interface CCUIContentModuleContext : NSObject

@property (readonly, copy, nonatomic) NSString *moduleIdentifier;
@property (weak, nonatomic) id<CCUIContentModuleContextDelegate> delegate;

+ (void)initialize;
+ (void)performWithoutAnimationWhileHidden:(id /* block */)a0;
+ (id)_sharedOpenAppService;
+ (BOOL)areAnimationsPermittedInWindow:(id)a0;
+ (id)_sharedOpenApplicationOptions;
+ (void)performWithoutAnimationWhileHiddenInWindow:(id)a0 actions:(id /* block */)a1;
+ (void)setAnimationsPermitted:(BOOL)a0 inWindow:(id)a1;

- (void)setHomeGestureDismissalAllowed:(BOOL)a0;
- (id)sensorActivityDataForActiveSensorType:(unsigned long long)a0;
- (void)enqueueStatusUpdate:(id)a0;
- (void)openApplication:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)dismissModule;
- (void)requestAuthenticationWithCompletionHandler:(id /* block */)a0;
- (struct CCUIModuleLayoutSize { unsigned long long x0; unsigned long long x1; })moduleLayoutSizeForOrientation:(long long)a0;
- (void)requestLayoutSizeUpdate;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithModuleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)requestExpandModule;
- (void)openApplication:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissControlCenter;

@end
