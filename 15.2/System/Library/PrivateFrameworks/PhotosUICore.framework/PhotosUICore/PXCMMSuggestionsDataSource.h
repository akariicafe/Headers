@class PXCMMSuggestionsDataSourceState, NSObject;
@protocol OS_dispatch_queue;

@interface PXCMMSuggestionsDataSource : PXSectionedDataSource {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) PXCMMSuggestionsDataSourceState *_state;

- (id)initWithState:(id)a0;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)suggestionAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)_adjustedIndexFromIndex:(long long)a0;

@end
