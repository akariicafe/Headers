@class NSArray, PHFetchResult, NSOrderedSet;

@interface PXPeoplePickerDataSource : PXSectionedDataSource

@property (readonly, nonatomic) PHFetchResult *_fetchResult;
@property (readonly, nonatomic) NSArray *disabledLocalIdentifiers;
@property (readonly, nonatomic) NSArray *allSelectedLocalIdentifiers;
@property (readonly, nonatomic) NSOrderedSet *newlySelectedObjectIDs;
@property (readonly, nonatomic) NSOrderedSet *newlyDeselectedObjectIDs;

- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)dataSourceUpdatedWithChange:(id)a0 changeDetails:(id *)a1;
- (void).cxx_destruct;
- (id)initWithFetchResult:(id)a0 disabledLocalIdentifiers:(id)a1 allSelectedLocalIdentifiers:(id)a2 newlySelectedObjectIDs:(id)a3 newlyDeselectedObjectIDs:(id)a4;
- (BOOL)isItemDisabledAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)personAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;

@end
