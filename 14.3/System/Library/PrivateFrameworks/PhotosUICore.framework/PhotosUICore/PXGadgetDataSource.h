@class NSArray;

@interface PXGadgetDataSource : PXSectionedDataSource

@property (readonly, nonatomic) NSArray *gadgetSections;
@property (readonly, nonatomic) BOOL hasNoContentGadget;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)init;
- (id)gadgetsOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)gadgetAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)gadgetSectionWithIdentifier:(id)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForGadgetSectionWithIdentifier:(id)a0;
- (void)enumerateGadgetsUsingBlock:(id /* block */)a0;
- (id)gadgetsOfType:(unsigned long long)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForGadget:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)gadgetWithId:(id)a0;
- (void)_enumerateGadgetsInSection:(id)a0 atSectionIndex:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateGadgetSectionsUsingBlock:(id /* block */)a0;
- (id)_gadgetsMatchingPredicate:(id)a0;
- (id)gadgetSectionAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void)_enumerateGadgetSectionsUsingBlock:(id /* block */)a0;
- (id)initWithGadgetSections:(id)a0;

@end
