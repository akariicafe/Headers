@interface AEMessagesShelfRoundButton : UIButton <PXReusableObject>

+ (id)_imageForStyle:(long long)a0;
+ (struct CGSize { double x0; double x1; })preferredTapRegionSizeForStyle:(long long)a0;
+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForStyle:(long long)a0;
+ (id)roundButtonWithStyle:(long long)a0;

- (void)becomeReusable;
- (void)prepareForReuse;
- (void)_commonAEMessagesRoundButtonInitializationWithStyle:(long long)a0;

@end
