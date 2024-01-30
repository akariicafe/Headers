@class NSString, NSDictionary, PXGTextLegibilityEffect;
@protocol PXSharedLibrarySharingSuggestion;

@interface PXSharedLibrarySharingSuggestionLayout : PXGLayout <PXGDisplayAssetSource, PXGStringSource, PXGSolidColorSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _contentSpriteIndex;
    unsigned int _textSpriteIndex;
    unsigned int _badgeSpriteIndex;
    unsigned short _assetContentVersion;
    unsigned short _labelContentVersion;
    unsigned short _badgeContentVersion;
    NSString *_subtitleThatFits;
    NSDictionary *_titleAttributes;
    NSDictionary *_titleAttributesWithoutSubtitle;
    NSDictionary *_subtitleAttributes;
    PXGTextLegibilityEffect *_legibilityEffect;
}

@property (retain, nonatomic) id<PXSharedLibrarySharingSuggestion> sharingSuggestion;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)axSpriteIndexes;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (void)_invalidateContent;
- (void)update;
- (void)entityManagerDidChange;
- (void)_updateContent;
- (id)init;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (void)screenScaleDidChange;
- (void)_invalidateAssetContentVersion;
- (void)_invalidateBadgeContentVersion;
- (void)_invalidateLabelContentVersion;
- (void)_invalidateSubtitleThatFits;
- (void)_updateSubtitleThatFits;
- (id)gradientForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
