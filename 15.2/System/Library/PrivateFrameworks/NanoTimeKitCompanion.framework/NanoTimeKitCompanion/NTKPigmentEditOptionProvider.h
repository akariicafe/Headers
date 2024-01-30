@class NSString, NSBundle, NTKFace, NTKPigmentEditOptionStore;

@interface NTKPigmentEditOptionProvider : NSObject <NTKPigmentEditOptionStoreListener> {
    NSBundle *_bundle;
    NSString *_domain;
    NTKPigmentEditOptionStore *_store;
}

@property (weak, nonatomic) NTKFace *face;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFace:(id)a0;
- (id)initWithDomain:(id)a0 bundle:(id)a1;
- (void)colorEditOptionStore:(id)a0 didChangeForDomain:(id)a1;
- (id)defaultColorOptionForSlot:(id)a0;
- (unsigned long long)numberOfOptionsForSlot:(id)a0;
- (unsigned long long)indexOfOption:(id)a0 slot:(id)a1;
- (id)optionAtIndex:(unsigned long long)a0 slot:(id)a1;
- (id)fulfilledOptionForOption:(id)a0 slot:(id)a1;
- (id)migratedOptionForInvalidOption:(id)a0 slot:(id)a1;
- (id)availableColorsForSlot:(id)a0;
- (BOOL)hasAddableCollectionsForSlot:(id)a0;

@end
