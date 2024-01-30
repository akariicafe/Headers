@class NSDictionary;
@protocol PXOutlineDataSectionManagerDelegate;

@interface PXOutlineDataSectionManager : PXDataSectionManager {
    NSDictionary *_dataSectionManagersByDataSectionObjects;
}

@property (weak, nonatomic) id<PXOutlineDataSectionManagerDelegate> delegate;

- (void).cxx_destruct;
- (id)_changeDetailsForNewDataSection:(id)a0;
- (id)changeDetailsForChangedChildDataSectionManager:(id)a0 childChangeDetails:(id)a1;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)a0;
- (id)childDataSectionManagerForOutlineObject:(id)a0;
- (id)createDataSection;
- (void)rearrangeSectionContent;
- (BOOL)shouldInvalidateDataSectionForChildDataSectionManager:(id)a0 changeDescriptor:(unsigned long long)a1;

@end
