@class PXMemoriesDataSourceState, NSObject;
@protocol OS_dispatch_queue;

@interface PXStateBasedMemoriesDataSource : PXMemoriesDataSource {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) PXMemoriesDataSourceState *_state;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)initWithState:(id)a0;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;

@end
