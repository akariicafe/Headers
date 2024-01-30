@class UILabel, UIImageView;

@interface UIAutocorrectBubble : UIView

@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UIImageView *backgroundView;

- (void)updateWithAutocorrectionText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)lastBaselineAnchor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;

@end
