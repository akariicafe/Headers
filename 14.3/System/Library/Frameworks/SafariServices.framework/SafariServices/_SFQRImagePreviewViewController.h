@class UIImageView, _WKActivatedElementInfo;
@protocol BCSAction;

@interface _SFQRImagePreviewViewController : UIViewController {
    UIImageView *_imageView;
    _WKActivatedElementInfo *_activatedElementInfo;
}

@property (readonly, nonatomic) id<BCSAction> action;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithElementInfo:(id)a0;
- (id)_contentViewSubtitleWithAction:(id)a0;

@end
