@class UIControl;

@interface PSControlTableCell : PSTableCell {
    UIControl *_control;
}

@property (retain, nonatomic) UIControl *control;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void)dealloc;
- (void).cxx_destruct;
- (id)valueLabel;
- (id)controlValue;
- (void)setCellEnabled:(BOOL)a0;
- (void)controlChanged:(id)a0;
- (id)newControl;

@end
