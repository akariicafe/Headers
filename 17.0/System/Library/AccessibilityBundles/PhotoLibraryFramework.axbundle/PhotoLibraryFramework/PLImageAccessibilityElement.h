@interface PLImageAccessibilityElement : UIAccessibilityElement

@property (nonatomic) int index;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)delegate;
- (id)dataSource;
- (id)accessibilityURL;
- (id)_accessibilityPhotoDescription;
- (id)_accessibilityDefaultFocusGroupIdentifier;
- (id)_accessibilityElementStoredUserLabel;
- (id)_axMainAssetURL;
- (long long)_albumPhotoIndex;
- (id)albumView;

@end
