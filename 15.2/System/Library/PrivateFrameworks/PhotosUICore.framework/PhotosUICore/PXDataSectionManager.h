@class PXArrayChangeDetails, NSArray, NSString, PXDataSection;
@protocol NSObject, NSCopying;

@interface PXDataSectionManager : PXObservable <PXDataSectionManagerChangeObserver> {
    PXDataSection *_dataSection;
}

@property (copy, nonatomic) NSArray *childDataSectionManagers;
@property (retain, nonatomic) id<NSObject, NSCopying> outlineObject;
@property (readonly, nonatomic) PXDataSection *dataSection;
@property (readonly, nonatomic) PXDataSection *dataSectionIfCreated;
@property (readonly, nonatomic) PXArrayChangeDetails *changeDetailsFromPreviousDataSection;
@property (readonly, nonatomic) PXDataSection *previousDataSection;
@property (readonly, nonatomic) long long previousDataSectionIdentifier;
@property (readonly, nonatomic) BOOL allowsEmptyDataSection;
@property (readonly, nonatomic, getter=isDataSectionEmpty) BOOL dataSectionEmpty;
@property (readonly, nonatomic) unsigned long long childChangeDescriptorsInvalidatingDataSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createDataSection;
- (id)initWithChildDataSectionManagers:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)setChangeProcessingPaused:(BOOL)a0 forReason:(id)a1;
- (id)auxiliaryObjectForKey:(id)a0 dataSectionObject:(id)a1 hintIndex:(long long)a2;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)a0;
- (id)changeDetailsForChangedChildDataSectionManager:(id)a0 childChangeDetails:(id)a1;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)a0;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)a0;
- (void)_setDataSection:(id)a0 changeDetails:(id)a1;
- (void)updateDataSectionWithChangeDetails:(id)a0;
- (void)childDataSectionManager:(id)a0 didChangeDataSectionWithChangeDetails:(id)a1;

@end
