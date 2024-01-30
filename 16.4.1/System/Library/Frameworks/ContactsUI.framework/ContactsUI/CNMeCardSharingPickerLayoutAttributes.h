@class UIColor, UIFont;

@interface CNMeCardSharingPickerLayoutAttributes : NSObject

@property (readonly, nonatomic) double topToAvatarPadding;
@property (readonly, nonatomic) UIFont *headerFont;
@property (readonly, nonatomic) struct CGSize { double width; double height; } avatarViewSize;
@property (readonly, nonatomic) double avatarViewToNamePadding;
@property (readonly, nonatomic) UIColor *backgroundColor;

+ (id)buddyHeaderFont;
+ (id)layoutAttributesForBuddy;
+ (id)layoutAttributesForSettings;
+ (id)settingsHeaderFont;

- (void).cxx_destruct;
- (id)initWithTopToAvatarPadding:(double)a0 headerFont:(id)a1 avatarViewSize:(struct CGSize { double x0; double x1; })a2 avatarViewToNamePadding:(double)a3 backgroundColor:(id)a4;

@end
