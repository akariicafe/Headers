@class NSString;
@protocol CCUIContentModuleContextDelegate;

@interface CCUIContentModuleContext : NSObject

@property (class, nonatomic, getter=areAnimationsPermitted) BOOL animationsPermitted;

@property (readonly, copy, nonatomic) NSString *moduleIdentifier;
@property (weak, nonatomic) id<CCUIContentModuleContextDelegate> delegate;

+ (void)initialize;
+ (id)_sharedOpenAppService;
+ (id)_sharedOpenApplicationOptions;
+ (void)setAnimationsPermitted:(BOOL)a0;
+ (void)performWithoutAnimationWhileHidden:(id /* block */)a0;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)openApplication:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)enqueueStatusUpdate:(id)a0;
- (void)dismissModule;
- (void)requestAuthenticationWithCompletionHandler:(id /* block */)a0;
- (void)dismissControlCenter;
- (void)setHomeGestureDismissalAllowed:(BOOL)a0;
- (void)requestLayoutSizeUpdate;
- (id)initWithModuleIdentifier:(id)a0;
- (void)openApplication:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestExpandModule;

@end
