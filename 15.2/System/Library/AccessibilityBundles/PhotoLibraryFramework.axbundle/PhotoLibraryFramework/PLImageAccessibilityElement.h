@interface PLImageAccessibilityElement : UIAccessibilityElement

@property (nonatomic) int index;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)dataSource;
- (id)delegate;
- (id)_accessibilityPhotoDescription;
- (id)accessibilityLabel;
- (id)_accessibilityElementStoredUserLabel;
- (id)_accessibilityDefaultFocusGroupIdentifier;
- (long long)_albumPhotoIndex;
- (id)albumView;
- (id)_axMainAssetURL;

@end
