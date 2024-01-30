@class UIView;

@interface NTKCDetailTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) BOOL ignoresRTLCorrection;
@property (nonatomic) BOOL showsSeparator;

+ (id)titleFont;
+ (id)defaultTextColor;
+ (id)reuseIdentifier;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithStyle:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (double)rowHeight;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_fontSizeDidChange;
- (BOOL)_visibleAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_fontForTextLabel;
- (id)_fontForDetailTextLabel;

@end
