@class UIColor, NSString, NSDictionary, PXPhotosLayoutSpec, PXSelectionSnapshot, NSIndexSet, PXAssetCollectionReference;

@interface PXPhotosSectionHeaderLayout : PXGLayout <PXGStringSource, PXGSolidColorSource, PXGNamedImageSource, PXPhotosSectionedLayoutHeader> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned short _dividerVersion;
    unsigned short _finalTitleVersion;
    unsigned short _subtitleVersion;
    unsigned short _badgeVersion;
    unsigned short _buttonVersion;
    NSIndexSet *_axSpriteIndexes;
}

@property (readonly, nonatomic) UIColor *dividerColor;
@property (copy, nonatomic) NSString *finalTitle;
@property (copy, nonatomic) NSDictionary *finalTitleAttributes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } finalTitleSize;
@property (copy, nonatomic) NSDictionary *subtitleAttributes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } subtitleSize;
@property (copy, nonatomic) NSDictionary *badgeAttributes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } badgeSize;
@property (copy, nonatomic) NSDictionary *buttonTitleAttributes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } buttonTitleSize;
@property (readonly, nonatomic) BOOL allowsInteraction;
@property (readonly, nonatomic) BOOL wantsChevron;
@property (readonly, nonatomic) BOOL wantsButton;
@property (readonly, nonatomic) double relativeOffsetAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } axSpriteFrame;
@property (readonly, nonatomic) NSString *axSpriteText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *badgeTitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic) BOOL isBadgeVisible;
@property (nonatomic) BOOL isFirstSectionHeader;
@property (retain, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXPhotosLayoutSpec *spec;
@property (nonatomic) BOOL isInSelectMode;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;

- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)axContentInfoAtSpriteIndex:(unsigned int)a0;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)initWithSpec:(id)a0;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)axSpriteIndexes;
- (id)axVisibleSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateContent;
- (void)safeAreaInsetsDidChange;
- (void)update;
- (void)visibleRectDidChange;
- (void)_updateContent;
- (void)_updateAttributes;
- (id)init;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;
- (void)contentSizeDidChange;
- (void).cxx_destruct;
- (void)_updateSpritesAlpha;
- (void)screenScaleDidChange;
- (void)_invalidateSubtitleMediaVersion;
- (void)_invalidateAttributes;
- (void)_invalidateBadgeMediaVersion;
- (void)_invalidateButtonTitleMediaVersion;
- (void)_invalidateDividerMediaVersion;
- (void)_invalidateFinalTitle;
- (void)_invalidateFinalTitleMediaVersion;
- (void)_invalidateRelativeOffsetAlpha;
- (void)_invalidateSpritesAlpha;
- (void)_updateFinalTitle;
- (void)_updateRelativeOffsetAlpha;
- (void)setDividerColor:(id)a0;
- (void)setRelativeOffsetAlpha:(double)a0;

@end
