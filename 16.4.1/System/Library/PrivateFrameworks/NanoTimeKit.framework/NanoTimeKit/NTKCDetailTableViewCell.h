@class UIView;

@interface NTKCDetailTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) BOOL ignoresRTLCorrection;
@property (nonatomic) BOOL showsSeparator;

+ (id)defaultTextColor;
+ (id)reuseIdentifier;
+ (id)titleFont;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (double)rowHeight;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_fontForDetailTextLabel;
- (id)_fontForTextLabel;
- (void)_fontSizeDidChange;
- (BOOL)_visibleAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
