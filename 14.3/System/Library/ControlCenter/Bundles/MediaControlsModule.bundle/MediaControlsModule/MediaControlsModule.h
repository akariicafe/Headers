@class NSString, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, MRUModuleViewController;

@interface MediaControlsModule : NSObject <CCUIContentModule>

@property (retain, nonatomic) UIViewController<MRUModuleViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)routingContextUID;
- (id)init;
- (void).cxx_destruct;
- (void)setContentModuleContext:(id)a0;
- (void)setupEndpointsViewController;
- (void)setupControlCenterViewController;

@end
