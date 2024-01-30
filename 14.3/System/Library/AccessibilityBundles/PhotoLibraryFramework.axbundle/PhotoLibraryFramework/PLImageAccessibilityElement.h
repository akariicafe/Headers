@interface PLImageAccessibilityElement : UIAccessibilityElement

@property (nonatomic) int index;

- (id)dataSource;
- (id)accessibilityURL;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)_accessibilityDefaultFocusGroupDescriptor;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)delegate;
- (id)_accessibilityPhotoDescription;
- (id)_accessibilityElementStoredUserLabel;
- (long long)_albumPhotoIndex;
- (id)albumView;
- (id)_axMainAssetURL;

@end
