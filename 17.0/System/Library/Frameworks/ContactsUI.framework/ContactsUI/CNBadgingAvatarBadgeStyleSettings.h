@class UIColor;

@interface CNBadgingAvatarBadgeStyleSettings : NSObject

@property (nonatomic) long long position;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long cropStyle;
@property (nonatomic) long long contentMode;

+ (unsigned long long)cnuiBadgeCropStyle:(long long)a0;
+ (long long)cnuiBadgePosition:(long long)a0;
+ (id)doNotDisturbBadgeSettings;
+ (id)markedForSyndicationBadgeSettings;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)cnuiBadgePosition;
- (unsigned long long)cnuiCropStyle;
- (id)initWithPosition:(long long)a0 color:(id)a1 backgroundColor:(id)a2 cropStyle:(long long)a3;

@end
