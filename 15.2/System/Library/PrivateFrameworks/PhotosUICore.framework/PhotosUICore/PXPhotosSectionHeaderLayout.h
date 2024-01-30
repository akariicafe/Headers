@class UIColor, NSString, NSDictionary, PXPhotosLayoutSpec, PXSelectionSnapshot, NSIndexSet, PXAssetCollectionReference;

@interface PXPhotosSectionHeaderLayout : PXGLayout <PXGStringSource, PXGSolidColorSource, PXGNamedImageSource, PXPhotosSectionedLayoutHeader> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
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

- (id)axContentInfoAtSpriteIndex:(unsigned int)a0;
- (void)safeAreaInsetsDidChange;
- (id)axVisibleSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)screenScaleDidChange;
- (void)_updateContent;
- (void)_invalidateContent;
- (id)axSpriteIndexes;
- (id)initWithSpec:(id)a0;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_updateAttributes;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)visibleRectDidChange;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)update;
- (void).cxx_destruct;
- (id)init;
- (void)referenceSizeDidChange;
- (void)contentSizeDidChange;
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

@end
