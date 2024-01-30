@class NSArray;

@interface _HKTimeScopeControlPill : HKTimeScopeControl {
    NSArray *_buttons;
    long long _selectedButtonIndex;
}

- (void)layoutSubviews;
- (long long)selectedTimeScope;
- (void).cxx_destruct;
- (void)setSelectedTimeScope:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 timeScopes:(id)a1 shortTextStyle:(BOOL)a2;
- (id)_generateButtonsWithTimeScopes:(id)a0 shortTextStyle:(BOOL)a1;
- (void)_selectButtonAtIndex:(long long)a0;
- (void)_setSelectedButtonIndex:(long long)a0;
- (void)_deselectAllButtons;
- (void)_buttonSelected:(id)a0;

@end
