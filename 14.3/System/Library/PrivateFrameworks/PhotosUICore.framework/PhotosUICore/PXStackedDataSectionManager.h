@class NSString;

@interface PXStackedDataSectionManager : PXDataSectionManager <PXDataSectionManagerEnabling>

@property (nonatomic) BOOL alwaysContainsObjects;
@property (retain, nonatomic) id additionalStorage;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createDataSection;
- (id)auxiliaryObjectForKey:(id)a0 dataSectionObject:(id)a1 hintIndex:(long long)a2;
- (id)childDataSectionManagerForObjectAtIndex:(long long)a0 localIndex:(long long *)a1;
- (BOOL)_updateDataSectionIfNecessary;
- (BOOL)isDataSectionEmpty;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)a0;
- (id)changeDetailsForChangedChildDataSectionManager:(id)a0 childChangeDetails:(id)a1;
- (id)initWithChildDataSectionManagers:(id)a0;

@end
