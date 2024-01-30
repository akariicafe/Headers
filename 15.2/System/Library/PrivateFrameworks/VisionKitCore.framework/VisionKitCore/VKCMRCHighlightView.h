@class VKCMRCDataDetectorElement, UILabel, VKPlatformView, NSLayoutConstraint;
@protocol VKCMRCHighlightViewDelegate;

@interface VKCMRCHighlightView : VKPlatformView

@property (retain, nonatomic) VKCMRCDataDetectorElement *element;
@property (retain, nonatomic) VKPlatformView *containerView;
@property (retain, nonatomic) VKPlatformView *pillView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSLayoutConstraint *pillWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pillTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pillCenterConstraint;
@property (weak, nonatomic) id<VKCMRCHighlightViewDelegate> delegate;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithElement:(id)a0 delegate:(id)a1;
- (void)createPillViewIfNecessary;
- (id)attributedStringForHeight:(double)a0;

@end
