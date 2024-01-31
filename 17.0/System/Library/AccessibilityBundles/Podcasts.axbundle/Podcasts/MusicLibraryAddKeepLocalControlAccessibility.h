@class NSString;

@interface MusicLibraryAddKeepLocalControlAccessibility : __MusicLibraryAddKeepLocalControlAccessibility_super

@property (retain, nonatomic, setter=_accessibilitySetCustomActionLabel:) NSString *_accessibilityCustomActionLabel;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_updateControlStatusProperties;
- (void)setControlStatus:(struct MusicLibraryAddKeepLocalControlStatus { long long x0; double x1; })a0 animated:(BOOL)a1;
- (void)setTitle:(id)a0 forControlStatusType:(long long)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityCustomActionLabelForControlStatus:(long long)a0;
- (id)_accessibilityLabelForStatusType:(long long)a0;
- (id)_accessibilityValueForStatusType:(long long)a0 andDownloadProgress:(double)a1;
- (BOOL)_accessibilityisStatusStructValidated;

@end
