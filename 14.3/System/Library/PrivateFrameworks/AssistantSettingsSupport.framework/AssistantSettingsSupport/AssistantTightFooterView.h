@class NSString, UILabel;

@interface AssistantTightFooterView : UIView <PSHeaderFooterView> {
    UILabel *_textLabel;
    NSString *_text;
}

@property (readonly, nonatomic) NSString *text;

- (id)initWithSpecifier:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textInsets;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)layoutSubviews;
- (void)setText:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_formatText;

@end
