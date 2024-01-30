@class UIControl;

@interface PSControlTableCell : PSTableCell {
    UIControl *_control;
}

@property (retain, nonatomic) UIControl *control;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void).cxx_destruct;
- (id)valueLabel;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)newControl;
- (void)dealloc;
- (void)controlChanged:(id)a0;
- (id)controlValue;

@end
