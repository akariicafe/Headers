@class NSString;

@interface _NTKCDetailActionButton : UIButton

@property (readonly, nonatomic) BOOL disabled;
@property (readonly, nonatomic) NSString *disabledReason;

- (void)_setTitle:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)_updateColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setDisabled:(BOOL)a0 forReason:(id)a1;

@end
