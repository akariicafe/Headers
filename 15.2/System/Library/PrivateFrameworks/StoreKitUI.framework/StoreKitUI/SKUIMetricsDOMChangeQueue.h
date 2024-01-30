@class NSMutableArray;

@interface SKUIMetricsDOMChangeQueue : NSObject {
    NSMutableArray *_storage;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)init;
- (void)addPendingChange:(id)a0;
- (id)oldestPendingChange;

@end
