@class UILabel, UIImageView;

@interface UIAutocorrectBubble : UIView

@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UIImageView *backgroundView;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)init;
- (void).cxx_destruct;
- (id)lastBaselineAnchor;
- (void)updateWithAutocorrectionText:(id)a0;

@end
