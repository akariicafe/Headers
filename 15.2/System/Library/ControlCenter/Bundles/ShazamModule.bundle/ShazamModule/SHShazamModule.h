@class SHShazamModuleViewController, NSString, CCUIContentModuleContext, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface SHShazamModule : NSObject <CCUIContentModule> {
    CCUIContentModuleContext *_contentModuleContext;
}

@property (retain, nonatomic) SHShazamModuleViewController *shazamModuleViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewControllerForContext:(id)a0;
- (void)setContentModuleContext:(id)a0;
- (void).cxx_destruct;

@end
