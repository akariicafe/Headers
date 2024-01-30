@class PXCMMTranscriptTextView, NSString, PXCMMSpec, PXUpdater, UIImageView, PXRoundedCornerOverlayView, UIActivityIndicatorView;

@interface PXCMMTranscriptBubbleStatusView : UIView {
    PXUpdater *_updater;
    PXCMMTranscriptTextView *_textView;
    UIImageView *_iconImageView;
    PXRoundedCornerOverlayView *_roundedCornerOverlay;
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) PXCMMSpec *spec;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bubbleSafeAreaInsets;
@property (copy, nonatomic) NSString *statusTitle;
@property (copy, nonatomic) NSString *statusDescription;
@property (nonatomic) BOOL showsActivityIndicator;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateRoundedCornerOverlayView;
- (struct CGSize { double x0; double x1; })_performLayoutInSize:(struct CGSize { double x0; double x1; })a0 minimizingSize:(BOOL)a1 updateSubviewFrames:(BOOL)a2;
- (void)_updateActivityIndicator;

@end
