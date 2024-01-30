@class NSMutableArray;

@interface WFAssociationContextQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;

- (void)removeAll;
- (id)pop;
- (void).cxx_destruct;
- (id)init;
- (id)peek;
- (void)push:(id)a0;
- (void)_dumpQueue;

@end
