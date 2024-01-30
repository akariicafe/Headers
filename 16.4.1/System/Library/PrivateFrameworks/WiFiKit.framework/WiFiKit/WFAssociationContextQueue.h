@class NSMutableArray;

@interface WFAssociationContextQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;

- (id)peek;
- (id)pop;
- (void)push:(id)a0;
- (void)removeAll;
- (id)init;
- (void).cxx_destruct;
- (void)_dumpQueue;

@end
