@class NSString, UIStoryboardPreviewingSegueTemplateStorage, UIView, UIViewController;
@protocol UIViewControllerPreviewing;

@interface UIStoryboardPreviewingRegistrant : NSObject <NSCoding, UIViewControllerPreviewingDelegate> {
    id<UIViewControllerPreviewing> _previewingContext;
    UIStoryboardPreviewingSegueTemplateStorage *_segueTemplateStorage;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)previewingContext:(id)a0 commitViewController:(id)a1;
- (void).cxx_destruct;
- (void)registerForPreviewing;
- (void)unregisterForPreviewing;

@end
