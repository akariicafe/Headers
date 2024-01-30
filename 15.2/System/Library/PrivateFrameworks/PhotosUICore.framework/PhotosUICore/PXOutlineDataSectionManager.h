@class NSDictionary;
@protocol PXOutlineDataSectionManagerDelegate;

@interface PXOutlineDataSectionManager : PXDataSectionManager {
    NSDictionary *_dataSectionManagersByDataSectionObjects;
}

@property (weak, nonatomic) id<PXOutlineDataSectionManagerDelegate> delegate;

- (id)createDataSection;
- (void).cxx_destruct;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)a0;
- (id)changeDetailsForChangedChildDataSectionManager:(id)a0 childChangeDetails:(id)a1;
- (id)_changeDetailsForNewDataSection:(id)a0;
- (id)childDataSectionManagerForOutlineObject:(id)a0;
- (void)rearrangeSectionContent;
- (unsigned long long)childChangeDescriptorsInvalidatingDataSection;

@end
