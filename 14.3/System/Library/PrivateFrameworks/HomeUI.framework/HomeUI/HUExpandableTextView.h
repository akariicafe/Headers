@class UITextView, NSArray, NSString, NSDictionary, UIButton;
@protocol HFStringGenerator, HUExpandableTextViewDelegate;

@interface HUExpandableTextView : UIView

@property (nonatomic) BOOL fitsWithinLineLimit;
@property (nonatomic) unsigned long long languageDirection;
@property (retain, nonatomic) NSArray *moreButtonLayoutConstraints;
@property (retain, nonatomic) UITextView *textView;
@property (nonatomic) long long textMode;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id<HFStringGenerator> stringGenerator;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (nonatomic) unsigned long long numberOfLines;
@property (retain, nonatomic) UIButton *moreButton;
@property (nonatomic) BOOL alwaysShowMoreButtonUnlessExpanded;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (weak, nonatomic) id<HUExpandableTextViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (double)heightForWidth:(double)a0;
- (void)updateConstraints;
- (void)moreButtonTapped:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLanguageDirection;

@end
