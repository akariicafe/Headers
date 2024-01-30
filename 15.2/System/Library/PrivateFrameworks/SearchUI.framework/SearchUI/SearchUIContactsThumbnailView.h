@class SFContactImage;

@interface SearchUIContactsThumbnailView : CNAvatarView

@property (retain, nonatomic) SFContactImage *contactImage;
@property (nonatomic) BOOL useCompactDisplay;
@property (nonatomic) BOOL forcePressViewIsEntireEnclosingCell;
@property (nonatomic) BOOL usesCompactWidth;

+ (id)avatarSettings;
+ (void)clearAvatarSettings;

- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setContactImage:(id)a0 useCompactDisplay:(BOOL)a1;
- (void)updateForcePressView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didMoveToWindow;

@end
