@class NSArray, CNAvatarAccessoryView;

@interface CNVisualIdentityAvatarLayoutManager : NSObject

@property (retain, nonatomic) NSArray *avatarViewAdHocLayoutConfiguration;
@property (retain, nonatomic) NSArray *avatarViewLayoutConfiguration;
@property (readonly, nonatomic) long long maxAvatarCount;
@property (retain, nonatomic) NSArray *avatarLayerItems;
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adHocAvatarFrameInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forItemCount:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adHocAvatarFrameInView:(id)a0 forItemCount:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarFrameForFocusedAvatarInView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarFrameInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forItemCount:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarFrameInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forItemCount:(long long)a1 withConfiguration:(id)a2;
- (BOOL)hasMediaContextBadge;
- (id)layoutConfigurationForIndex:(long long)a0 inItemCount:(long long)a1 withLayoutType:(unsigned long long)a2;
- (void)updateAvatarLayersForItemCount:(long long)a0 inView:(id)a1;
- (void)updateAvatarLayersForItemCount:(long long)a0 inView:(id)a1 withLayoutType:(unsigned long long)a2;
- (void)updateAvatarLayersWithPrimaryAvatarForItemCount:(long long)a0 inView:(id)a1;
- (void)updateLayer:(id)a0 forItemCount:(long long)a1 atIndex:(long long)a2 inView:(id)a3 withLayoutType:(unsigned long long)a4;

@end
