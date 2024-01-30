@class NSString, UILabel, UIView, NSLayoutConstraint;

@interface HKListItemLabel : UIView

@property (nonatomic) struct CGSize { double width; double height; } itemViewSize;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIView *itemView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSLayoutConstraint *itemViewTextAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topToTextLabelFirstBaselineConstraint;
@property (nonatomic) BOOL centerItemViewToFirstLine;
@property (nonatomic) BOOL boldText;

+ (id)createListItem:(id)a0 itemNumber:(int)a1;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (id)_textLabelFont;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateItemViewTextAlignmentConstraint;
- (void)_updateTextLabelFont;
- (id)initWithView:(id)a0 size:(struct CGSize { double x0; double x1; })a1 text:(id)a2;
- (double)_topToTextLabelFirstBaseline;
- (double)_textLabelLastBaselineToBottom;
- (id)_textLabelBoldFont;
- (id)_textLabelFontStyle;

@end
