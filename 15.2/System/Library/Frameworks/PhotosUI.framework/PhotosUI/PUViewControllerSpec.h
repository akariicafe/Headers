@class PUViewControllerSpecChange, UITraitCollection, NSHashTable;

@interface PUViewControllerSpec : NSObject

@property (readonly, nonatomic) NSHashTable *_changeObservers;
@property (nonatomic, setter=_setChangeCount:) long long _changeCount;
@property (nonatomic, setter=_setNeedsUpdateLayoutStyle:) BOOL _needsUpdateLayoutStyle;
@property (readonly, nonatomic) long long currentLayoutStyle;
@property (readonly, nonatomic) PUViewControllerSpecChange *currentChange;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) struct CGSize { double width; double height; } layoutReferenceSize;
@property (nonatomic, getter=isPresentedForSecondScreen) BOOL presentedForSecondScreen;
@property (nonatomic) struct CGSize { double width; double height; } secondScreenSize;
@property (nonatomic) BOOL prefersCompactLayoutForSplitScreen;

- (void)unregisterChangeObserver:(id)a0;
- (void)registerChangeObserver:(id)a0;
- (void)updateIfNeeded;
- (void)performChanges:(id /* block */)a0;
- (void)assertInsideChangesBlock;
- (void)_publishChange:(id)a0;
- (void)_setCurrentChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_didChange;
- (void)_willChange;
- (struct CGSize { double x0; double x1; })_portraitOrientedSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (id)newSpecChange;
- (void)_invalidateLayoutStyle;
- (void)_updateCurrentLayoutStyleIfNeeded;
- (void)_setCurrentLayoutStyle:(long long)a0;

@end
