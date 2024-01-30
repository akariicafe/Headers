@class UIColor, UIPageControl, NSString, UILabel;
@protocol WFNumericPageControlDelegate;

@interface WFNumericPageControl : UIView <WFAdjustableLabelDelegate>

@property (weak, nonatomic) UIPageControl *pageControl;
@property (weak, nonatomic) UILabel *pageLabel;
@property (nonatomic) long long currentPage;
@property (nonatomic) long long numberOfPages;
@property (weak, nonatomic) id<WFNumericPageControlDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedPageTintColor;
@property (retain, nonatomic) UIColor *deselectedPageTintColor;
@property (nonatomic) BOOL usesBoldText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateControls;
- (void)layoutSubviews;
- (void)adjustableLabelRequestedDecrement:(id)a0;
- (void)adjustableLabelRequestedIncrement:(id)a0;
- (void)pageControlValueChanged:(id)a0;

@end
