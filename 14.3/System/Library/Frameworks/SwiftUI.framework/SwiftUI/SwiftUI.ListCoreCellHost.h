@interface SwiftUI.ListCoreCellHost : UITableViewCell {
    void /* unknown type, empty encoding */ cellConfiguration;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ selectionBehavior;
    void /* unknown type, empty encoding */ outlineRootSeed;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)_updateViewConfigurationsWithState:(unsigned long long)a0;
- (void)_setHiddenForReuse:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
