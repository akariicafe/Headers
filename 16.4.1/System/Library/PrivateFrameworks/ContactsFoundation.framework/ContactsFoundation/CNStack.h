@class NSMutableArray;

@interface CNStack : NSObject {
    NSMutableArray *_objects;
}

@property (readonly, nonatomic) id peek;
@property (readonly, nonatomic) unsigned long long count;

- (id)pop;
- (void)removeObject:(id)a0;
- (void)popWithHandler:(id /* block */)a0;
- (void)popAllWithHandler:(id /* block */)a0;
- (void)push:(id)a0;
- (id)popAll;
- (id)init;
- (void).cxx_destruct;

@end
