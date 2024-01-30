@class NSMutableArray;

@interface REUpNextSetNode : NSObject

@property (readonly, nonatomic) id item;
@property (retain, nonatomic) REUpNextSetNode *parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (nonatomic) unsigned long long rank;

- (void)remove;
- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (id)rootNode;
- (void)join:(id)a0;

@end
