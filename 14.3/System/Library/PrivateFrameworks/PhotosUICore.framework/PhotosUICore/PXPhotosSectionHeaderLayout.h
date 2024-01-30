@class UIColor, NSString, NSDictionary, PXPhotosLayoutSpec, PXSelectionSnapshot, NSIndexSet, PXAssetCollectionReference;

@interface PXPhotosSectionHeaderLayout : PXGLayout <PXGStringSource, PXGSolidColorSource, PXGNamedImageSource, PXPhotosSectionedLayoutHeader> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    unsigned short _dividerVersion;
    unsigned short _titleVersion;
    unsigned short _subtitleVersion;
    NSIndexSet *_axSpriteIndexes;
}

@property (readonly, nonatomic) UIColor *dividerColor;
@property (copy, nonatomic) NSDictionary *titleAttributes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } titleSize;
@property (copy, nonatomic) NSDictionary *subtitleAttributes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } subtitleSize;
@property (readonly, nonatomic) BOOL allowsInteraction;
@property (readonly, nonatomic) double relativeOffsetAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } axSpriteFrame;
@property (readonly, nonatomic) NSString *axSpriteText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL isFirstSectionHeader;
@property (retain, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXPhotosLayoutSpec *spec;
@property (nonatomic) BOOL isInSelectMode;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;

- (void)contentSizeDidChange;
- (void)_updateContent;
- (id)axContentInfoAtSpriteIndex:(unsigned int)a0;
- (void)_invalidateContent;
- (void)safeAreaInsetsDidChange;
- (id)initWithSpec:(id)a0;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (id)init;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)referenceSizeDidChange;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (void)_updateAttributes;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)axSpriteIndexes;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)axVisibleSpriteIndexes;
- (void)screenScaleDidChange;
- (void)update;
- (void)visibleRectDidChange;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_updateSpritesAlpha;
- (void)setDividerColor:(id)a0;
- (void)setRelativeOffsetAlpha:(double)a0;
- (void)_invalidateAttributes;
- (void)_invalidateRelativeOffsetAlpha;
- (void)_updateRelativeOffsetAlpha;
- (void)_invalidateSpritesAlpha;
- (void)_invalidateDividerMediaVersion;
- (void)_invalidateTitleMediaVersion;
- (void)_invalidateSubtitleMediaVersion;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
