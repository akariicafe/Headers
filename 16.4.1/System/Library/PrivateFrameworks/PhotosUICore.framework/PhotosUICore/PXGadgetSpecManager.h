@class NSString, NSMutableSet, PXGadgetSpec, PXExtendedTraitCollection;

@interface PXGadgetSpecManager : PXObservable <PXChangeObserver, PXMutableGadgetSpecManager>

@property (retain, nonatomic) PXGadgetSpec *currentGadgetSpec;
@property (readonly, nonatomic) Class gadgetSpecClass;
@property (readonly, nonatomic) long long scrollAxis;
@property (retain, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (retain, nonatomic) NSMutableSet *updatedGadgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_extendedTraitCollection:(id)a0 didChange:(unsigned long long)a1;
- (void)performChanges:(id /* block */)a0;
- (id)initWithGadgetSpecClass:(Class)a0 scrollAxis:(long long)a1 traitCollection:(id)a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)updateGadgetDataSourceToSpecIfNeeded:(id)a0;
- (id)mutableChangeObject;
- (void).cxx_destruct;

@end
