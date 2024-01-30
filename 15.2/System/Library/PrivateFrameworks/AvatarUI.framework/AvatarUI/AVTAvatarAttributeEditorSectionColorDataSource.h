@class AVTAvatarAttributeEditorColorSection;
@protocol AVTAvatarAttributeEditorSectionColorDataSourceDelegate;

@interface AVTAvatarAttributeEditorSectionColorDataSource : NSObject

@property (nonatomic) long long selectedPrimaryColorIndex;
@property (nonatomic) long long selectedExtendedColorIndex;
@property (nonatomic) long long displayMode;
@property (readonly, nonatomic) long long selectedItemIndex;
@property (retain, nonatomic) AVTAvatarAttributeEditorColorSection *colorSection;
@property (readonly, nonatomic) BOOL isShowingSlider;
@property (readonly, nonatomic) BOOL isShowingExtended;
@property (nonatomic) id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate> delegate;

+ (id)selectedItemFromItems:(id)a0;
+ (long long)indexOfItem:(id)a0 inItems:(id)a1;

- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetToDefaultDisplayMode;
- (void)updateSelectedIndexesSelectingItem:(id)a0 fromUserInteraction:(BOOL)a1;
- (id)indexPathOfExtendedIcon;
- (void)toggleSliderMode;
- (void)toggleExtendedMode;
- (id)sectionItemAtIndex:(long long)a0;
- (void)selectSectionItemAtIndexPath:(id)a0;

@end
