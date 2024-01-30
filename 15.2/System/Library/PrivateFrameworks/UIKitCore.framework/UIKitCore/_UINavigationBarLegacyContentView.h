@class _UINavigationBarVisualProviderLegacyIOS;

@interface _UINavigationBarLegacyContentView : UIView

@property (nonatomic) _UINavigationBarVisualProviderLegacyIOS *visualProvider;

- (void)layoutSubviews;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;

@end
