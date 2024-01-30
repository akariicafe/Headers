@class UIImageSymbolConfiguration, UIFont, UITraitCollection;

@interface SFNavigationBarMetrics : NSObject {
    BOOL _usesNavigationBarHeightForSheetPresentation;
    UITraitCollection *_traitCollectionForFontMetrics;
    double _minimumBarHeight;
    UIFont *_defaultLabelFont;
    UIFont *_defaultBoldFont;
    UIFont *_narrowEditingLabelFont;
    BOOL _narrowEditingScaleFactorNeedsUpdate;
    double _narrowEditingScaleFactor;
    double _safariBarHeight;
    double _safariViewControllerBarHeight;
    double _safariSquishHeightQuantizationOffset;
    double _safariViewControllerSquishHeightQuantizationOffset;
    double _statusBarHeight;
    UIImageSymbolConfiguration *_accessoryImageSymbolConfiguration;
    UIImageSymbolConfiguration *_squishedAccessoryImageSymbolConfiguration;
    UIImageSymbolConfiguration *_mediumButtonImageSymbolConfiguration;
    double _accessibilityImageScale;
    double _urlOutlineCornerRadius;
    double _defaultBarHeight;
    double _urlContainerTop;
    double _urlOutlineHeight;
    double _urlLabelVerticalOffset;
    double _urlLabelAccessoryItemSquishedVerticalOffset;
    double _urlLabelAccessoryLockItemVerticalOffset;
    double _distanceFromLabelBaselineToURLOutlineBottom;
    UITraitCollection *_traitCollectionForButtonMetrics;
}

- (id)init;
- (void).cxx_destruct;

@end
