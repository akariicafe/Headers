@class PXFeatureSpec, NSString, PXExtendedTraitCollection;

@interface PXFeatureSpecManager : PXObservable <PXChangeObserver>

@property (readonly, nonatomic) unsigned long long defaultChangesToUpdateFor;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) PXFeatureSpec *spec;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateSpec;
- (id)init;
- (Class)specClass;
- (id)initWithExtendedTraitCollection:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_setSpec:(id)a0;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)mutableChangeObject;
- (void)invalidateSpec;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (id)createSpec;

@end
