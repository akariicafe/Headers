@interface CNUIAvatarLayoutManager : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarBadgeRectForAvatarInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 badgeType:(unsigned long long)a1 isRTL:(BOOL)a2;
+ (id)avatarViewLayoutConfigurationsForType:(unsigned long long)a0;
+ (void)cropAvatarBadgeLayer:(id)a0 withCropStyle:(unsigned long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForBadgeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onAvatarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withPosition:(long long)a2 mediaContextFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 isRTL:(BOOL)a4;
+ (id)layoutConfigurationsForType:(unsigned long long)a0 withItemCount:(long long)a1;
+ (long long)maxAvatarCountForType:(unsigned long long)a0;
+ (void)applyAvatarBadgeStylingToLayer:(id)a0 badgeType:(unsigned long long)a1;
+ (id)avatarBadgeLayerForAvatarInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 badgeType:(unsigned long long)a1 isRTL:(BOOL)a2;
+ (id)avatarViewLayoutConfigurationsDictionaryForType:(unsigned long long)a0;
+ (id)avatarViewLayoutItemConfigurations:(id)a0;
+ (id)identifierForLayoutType:(unsigned long long)a0;

@end
