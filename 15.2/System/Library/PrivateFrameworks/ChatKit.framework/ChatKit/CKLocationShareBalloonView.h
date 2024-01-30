@class NSString, UIImageView, UIVisualEffectView, UILabel, UIView, UIButton;
@protocol CKLocationShareBalloonViewDelegate;

@interface CKLocationShareBalloonView : CKImageBalloonView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIButton *startSharingButton;
@property (retain, nonatomic) UIButton *ignoreButton;
@property (retain, nonatomic) UIView *horizontalSeparator;
@property (retain, nonatomic) UIView *verticalSeparator;
@property (retain, nonatomic) UIImageView *chevron;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (weak, nonatomic) id<CKLocationShareBalloonViewDelegate> delegate;
@property (nonatomic) long long offerState;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *locationString;

- (void)prepareForDisplay;
- (void)layoutSubviews;
- (void)configureForLocationShareOfferChatItem:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_shareButtonHit:(id)a0;
- (void)_ignoreButtonHit:(id)a0;
- (void)clearFilters;

@end
