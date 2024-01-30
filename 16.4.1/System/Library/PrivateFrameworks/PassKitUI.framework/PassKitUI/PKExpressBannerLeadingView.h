@class PKPass, NSString, CAPortalLayer, PKPassThumbnailView, CALayer, NSObject, NSMutableArray, CAStateController;
@protocol OS_dispatch_source, PKExpressBannerLeadingViewDelegate;

@interface PKExpressBannerLeadingView : UIView <SBUISystemApertureAccessoryView> {
    PKPass *_pass;
    PKPassThumbnailView *_passView;
    CAPortalLayer *_passPortal;
    CALayer *_contentLayer;
    CALayer *_frontLayer;
    CAStateController *_controller;
    int _state;
    int _sizeClass;
    NSObject<OS_dispatch_source> *_transitionTimer;
    NSMutableArray *_completions;
    struct CGSize { double width; double height; } _nativeSize;
    struct CGSize { double width; double height; } _nativeAlignmentSize;
    struct CGSize { double width; double height; } _targetSize;
    struct CGSize { double width; double height; } _targetAlignmentSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _targetAlignmentInsets;
    id<PKExpressBannerLeadingViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
