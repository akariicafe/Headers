@class NSMutableArray;

@interface CNStack : NSObject {
    NSMutableArray *_objects;
}

@property (readonly, nonatomic) id peek;
@property (readonly, nonatomic) unsigned long long count;

- (void)push:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)pop;
- (void)popAllWithHandler:(id /* block */)a0;
- (void)popWithHandler:(id /* block */)a0;
- (id)popAll;

@end
