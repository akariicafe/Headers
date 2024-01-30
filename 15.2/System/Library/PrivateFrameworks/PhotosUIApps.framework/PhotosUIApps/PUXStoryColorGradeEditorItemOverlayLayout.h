@class NSIndexSet;

@interface PUXStoryColorGradeEditorItemOverlayLayout : PXGLayout <PXGStringSource, PXGNamedImageSource, PXGSolidColorSource> {
    void /* unknown type, empty encoding */ colorGradeKind;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ backgroundSpriteIndex;
    void /* unknown type, empty encoding */ captionSpriteIndex;
    void /* unknown type, empty encoding */ selectionBadgeSpriteIndex;
    void /* unknown type, empty encoding */ accessibleSpriteIndexes;
    void /* unknown type, empty encoding */ updateFlags;
    void /* unknown type, empty encoding */ captionHeight;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;
@property (nonatomic, readonly) NSIndexSet *axVisibleSpriteIndexes;
@property (nonatomic, readonly) NSIndexSet *axSelectedSpriteIndexes;

- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (id)axContentInfoAtSpriteIndex:(unsigned int)a0;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)screenScaleDidChange;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(id *)a2;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)update;
- (void).cxx_destruct;
- (id)init;
- (void)referenceSizeDidChange;

@end
