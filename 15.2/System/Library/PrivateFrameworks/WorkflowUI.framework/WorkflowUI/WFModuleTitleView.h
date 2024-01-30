@class NSString, UIImageView, WFAction, UILabel, UIButton;
@protocol WFModuleTitleViewDelegate;

@interface WFModuleTitleView : UIView <WFActionEventObserver>

@property (readonly, weak, nonatomic) UIImageView *imageView;
@property (readonly, weak, nonatomic) UILabel *titleLabel;
@property (readonly, weak, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) UIButton *handoffButton;
@property (weak, nonatomic) UIButton *installButton;
@property (weak, nonatomic) id<WFModuleTitleViewDelegate> delegate;
@property (retain, nonatomic) WFAction *action;
@property (nonatomic) unsigned long long accessoryMode;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL hideSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (struct CGSize { double x0; double x1; })iconSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)accessibilityTraits;
- (void)updateFont;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)dealloc;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (void)actionNameDidChange:(id)a0;
- (double)imageViewWidth;
- (void)configureWithTitle:(id)a0 subtitle:(id)a1 applicationBundleIdentifer:(id)a2;
- (double)iconTitlePadding;
- (BOOL)isTitleLabelMultiline;
- (double)titleSubtitlePadding;
- (struct CGSize { double x0; double x1; })sizeForLabel:(id)a0 withMaxWidth:(double)a1;
- (void)installButtonPressed:(id)a0;
- (void)handoffButtonPressed:(id)a0;
- (BOOL)installAction;
- (BOOL)toggleFavorited;

@end
