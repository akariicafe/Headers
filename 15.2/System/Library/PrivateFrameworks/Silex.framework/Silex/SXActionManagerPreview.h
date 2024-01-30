@class UIViewController;
@protocol SXActionPreviewActivity, SXAction;

@interface SXActionManagerPreview : NSObject {
    id<SXAction> _action;
    id<SXActionPreviewActivity> _previewActivity;
    UIViewController *_viewController;
}

- (void).cxx_destruct;

@end
