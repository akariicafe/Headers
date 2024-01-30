@class TLKIconsView, TLKRoundedCornerLabels, UIFont, NSString, TLKLabel, TLKStarsView, TLKRichText;
@protocol TLKObserver;

@interface TLKRichTextField : TLKStackView <NUIContainerViewDelegate, TLKObservable, TLKObserver>

@property (retain, nonatomic) TLKLabel *textLabel;
@property (retain, nonatomic) TLKRoundedCornerLabels *roundedCornerLabels;
@property (retain, nonatomic) TLKStarsView *starRatingView;
@property (retain, nonatomic) TLKIconsView *iconView;
@property (retain, nonatomic) TLKRichText *richText;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic) unsigned long long roundedCornerLabelSizeConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<TLKObserver> observer;
@property (nonatomic) long long batchUpdateCount;

- (id)viewForLastBaselineLayout;
- (void)updateIcons:(id)a0;
- (void)updateWithRichText:(id)a0;
- (void)updateStarRating:(id)a0;
- (void)updateRoundedCornerLabels:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)attributedString;
- (void)propertiesDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
