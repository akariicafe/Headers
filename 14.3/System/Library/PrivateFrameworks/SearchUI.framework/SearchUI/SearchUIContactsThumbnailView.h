@class SFContactImage;

@interface SearchUIContactsThumbnailView : CNAvatarView

@property (retain, nonatomic) SFContactImage *contactImage;
@property (nonatomic) BOOL useCompactDisplay;
@property (nonatomic) BOOL usesCompactWidth;

+ (void)clearAvatarSettings;
+ (id)avatarSettings;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void)updateWithRowModel:(id)a0;
- (void)setContactImage:(id)a0 useCompactDisplay:(BOOL)a1;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (void)layoutSubviews;

@end
