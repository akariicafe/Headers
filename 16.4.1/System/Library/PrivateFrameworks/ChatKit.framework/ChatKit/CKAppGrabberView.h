@class _UIGrabber, NSString, UIImageView, UILabel, UIView, UIButton;
@protocol CKAppGrabberViewDelegate;

@interface CKAppGrabberView : UIView {
    UIImageView *_iconImageView;
    UIImageView *_iconOutlineView;
    UILabel *_pluginTitleLabel;
    UIView *_headerView;
    UIView *_grayLine;
    _UIGrabber *_chevronView;
    NSString *_appIdentifier;
}

@property (weak, nonatomic) id<CKAppGrabberViewDelegate> delegate;
@property (nonatomic) BOOL showsGrabberPill;
@property (nonatomic) BOOL showsAppTitle;
@property (readonly, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL roundsTopCorners;
@property (readonly, nonatomic) double visualOriginYOffset;
@property (readonly, nonatomic) double chevronMaxYOffset;

+ (double)compactRoundedCornerRadius;
+ (double)roundedCornerRadius;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)iconImageView;
- (id)headerView;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)closeButtonTapped:(id)a0;
- (double)chevronMaxYInView:(id)a0;
- (void)updateAppTitle:(id)a0 icon:(id)a1 appIdentifier:(id)a2;
- (void)updateHeaderFrame:(BOOL)a0;
- (void)updateIconImageView:(id)a0;
- (double)visualOriginYInView:(id)a0;

@end
