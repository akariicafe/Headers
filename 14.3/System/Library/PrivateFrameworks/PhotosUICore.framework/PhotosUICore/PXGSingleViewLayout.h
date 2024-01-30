@class NSString, NSIndexSet, PXGSpriteReference, UIView;
@protocol PXGSingleViewLayoutDelegate;

@interface PXGSingleViewLayout : PXGLayout <PXGViewSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    unsigned short _contentSpriteMediaVersion;
    NSIndexSet *_axSpriteIndexes;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) Class contentViewClass;
@property (weak, nonatomic) id<PXGSingleViewLayoutDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) float zPosition;
@property (readonly, nonatomic) PXGSpriteReference *viewSpriteReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_updateContent;
- (void)_invalidateContent;
- (void)_invalidateMediaVersion;
- (void)alphaDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (id)init;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)referenceSizeDidChange;
- (void).cxx_destruct;
- (void)viewSizeDidChange;
- (id)axSpriteIndexes;
- (void)screenScaleDidChange;
- (void)update;
- (void)viewContentDidChange;

@end
