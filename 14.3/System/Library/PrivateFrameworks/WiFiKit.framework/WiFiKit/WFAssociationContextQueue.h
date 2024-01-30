@class NSMutableArray;

@interface WFAssociationContextQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;

- (void)push:(id)a0;
- (void)removeAll;
- (id)init;
- (void).cxx_destruct;
- (id)pop;
- (id)peek;
- (void)_dumpQueue;

@end
