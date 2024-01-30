@class UIView;

@interface NTKCDetailTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) BOOL ignoresRTLCorrection;
@property (nonatomic) BOOL showsSeparator;

+ (id)titleFont;
+ (id)reuseIdentifier;
+ (id)defaultTextColor;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (double)rowHeight;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_fontSizeDidChange;
- (BOOL)_visibleAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_fontForTextLabel;
- (id)_fontForDetailTextLabel;

@end
