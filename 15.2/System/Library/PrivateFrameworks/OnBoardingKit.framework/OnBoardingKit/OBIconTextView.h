@class UIImageView, UITextView;

@interface OBIconTextView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) UITextView *textView;
@property (nonatomic) double padding;
@property (readonly, nonatomic) double baselineFromBoundsTop;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)updateFont;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithIcon:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 text:(id)a2 dataDetectorTypes:(unsigned long long)a3;
- (void)traitCollectionDidChange:(id)a0;

@end
