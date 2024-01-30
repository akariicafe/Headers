@class NSMutableArray;

@interface SKUIMetricsDOMChangeQueue : NSObject {
    NSMutableArray *_storage;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)addPendingChange:(id)a0;
- (id)oldestPendingChange;

@end
