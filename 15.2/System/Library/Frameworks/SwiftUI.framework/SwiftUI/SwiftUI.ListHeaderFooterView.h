@interface SwiftUI.ListHeaderFooterView : UITableViewHeaderFooterView {
    void /* unknown type, empty encoding */ viewListID;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ outlineRootSeed;
}

@property (nonatomic) BOOL isAccessibilityElement;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_updateViewConfigurationsWithState:(unsigned long long)a0;

@end
