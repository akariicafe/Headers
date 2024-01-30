@class UIImageView, UIImage, NSLayoutConstraint, UILabel, UIView;
@protocol FMFNoLocationViewDelegate;

@interface FMFNoLocationView : UIView

@property (retain, nonatomic) NSLayoutConstraint *topInsetConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomInsetConstraint;
@property (retain, nonatomic) UIImage *offlineProfileImage;
@property (retain, nonatomic) UIImageView *offlineProfileImageView;
@property (retain, nonatomic) UIImageView *personImageView;
@property (retain, nonatomic) UILabel *detailsLabel;
@property (retain, nonatomic) UIView *blur;
@property (retain, nonatomic) UIView *insetView;
@property (weak, nonatomic) id<FMFNoLocationViewDelegate> delegate;
@property (nonatomic) BOOL blockLabelUpdates;

- (id)accessibilityLabel;
- (void)setAlpha:(double)a0;
- (void)updateLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addLayoutConstraints;
- (void)updateConstriantsForInsets;
- (void)updateLabelNotification:(id)a0;
- (void)updatePersonImageViewImage;

@end
