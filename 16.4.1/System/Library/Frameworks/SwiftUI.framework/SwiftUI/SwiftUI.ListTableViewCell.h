@interface SwiftUI.ListTableViewCell : UITableViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ cellConfiguration;
    void /* unknown type, empty encoding */ disclosureIndent;
    void /* unknown type, empty encoding */ separatorConfiguration;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ isDisplaying;
    void /* unknown type, empty encoding */ selectionBehavior;
    void /* unknown type, empty encoding */ viewListID;
    void /* unknown type, empty encoding */ outlineRootSeed;
    void /* unknown type, empty encoding */ hasDragItemsPreference;
    void /* unknown type, empty encoding */ hasItemProviderTrait;
    void /* unknown type, empty encoding */ focusItem;
}

@property (nonatomic) BOOL isAccessibilityElement;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutMarginsDidChange;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)a0;

@end
