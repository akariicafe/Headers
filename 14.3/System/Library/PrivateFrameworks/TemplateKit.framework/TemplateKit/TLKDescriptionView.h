@class TLKStackView, TLKTextView, UIView, NSString, TLKImage, NUIContainerBoxView, TLKMultilineText, TLKImageView, TLKLabel, UIBezierPath, TLKTextButton;
@protocol TLKDescriptionViewDelegate;

@interface TLKDescriptionView : TLKView <NUIContainerViewDelegate>

@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) TLKTextView *detailsTextView;
@property (retain, nonatomic) TLKTextButton *moreButton;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) NUIContainerBoxView *imageAndDescriptionBoxView;
@property (retain, nonatomic) UIBezierPath *imageViewExclusionPath;
@property (retain, nonatomic) UIBezierPath *moreButtonExclusionPath;
@property (retain, nonatomic) TLKTextButton *footnoteButton;
@property (retain, nonatomic) TLKTextButton *trailingFootnoteButton;
@property (retain, nonatomic) TLKStackView *footnoteButtonStackView;
@property (retain, nonatomic) UIView *footnoteButtonStackDummyView;
@property (retain, nonatomic) TLKImage *image;
@property (retain, nonatomic) TLKMultilineText *text;
@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) NSString *footnoteButtonText;
@property (retain, nonatomic) NSString *trailingFootnoteButtonText;
@property (retain, nonatomic) NSString *moreButtonText;
@property (weak) id<TLKDescriptionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForFirstBaselineLayout;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfLines;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)moreButtonPressed;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (void)footnoteButtonPressed;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultBaselineRelativeLayoutMargins;
- (void)trailingFootnoteButtonPressed;
- (void)setExclusionPathInContainer:(id)a0 includeMoreButton:(BOOL)a1;
- (BOOL)shouldHideMoreButtonForTextView:(id)a0;
- (struct CGSize { double x0; double x1; })textSizeForTextView:(id)a0 width:(double)a1 lineCount:(unsigned long long)a2;
- (void)simulateMoreButtonPress;
- (id)imageExclusionPath;
- (id)detailTextViewText;
- (BOOL)moreButtonIsHidden;
- (id)exclusionPathsForTextView;

@end
