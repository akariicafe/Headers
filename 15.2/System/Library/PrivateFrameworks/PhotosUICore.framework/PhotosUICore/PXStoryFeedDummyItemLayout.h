@class NSString;

@interface PXStoryFeedDummyItemLayout : PXGLayout <PXGSolidColorSource, PXGStringSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _backgroundSpriteIndex;
    unsigned int _textSpriteIndex;
    unsigned short _contentVersion;
}

@property (retain, nonatomic) id representedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)screenScaleDidChange;
- (void)_updateContent;
- (void)_invalidateContent;
- (id)axSpriteIndexes;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)update;
- (void).cxx_destruct;
- (id)init;
- (void)referenceSizeDidChange;
- (void)_invalidateContentVersion;

@end
