@class NSString;

@interface _NTKCDetailAddButton : UIButton

@property (readonly, nonatomic) BOOL disabled;
@property (readonly, nonatomic) NSString *disabledReason;

- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)setDisabled:(BOOL)a0 forReason:(id)a1;
- (void)_updateColor;

@end
