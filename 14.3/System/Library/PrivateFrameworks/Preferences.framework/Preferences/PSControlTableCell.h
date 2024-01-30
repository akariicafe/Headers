@class UIControl;

@interface PSControlTableCell : PSTableCell {
    UIControl *_control;
}

@property (retain, nonatomic) UIControl *control;

- (id)newControl;
- (id)controlValue;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void).cxx_destruct;
- (void)dealloc;
- (id)valueLabel;
- (void)controlChanged:(id)a0;

@end
