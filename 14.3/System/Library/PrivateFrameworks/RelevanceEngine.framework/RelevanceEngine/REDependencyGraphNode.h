@class NSHashTable;

@interface REDependencyGraphNode : NSObject

@property (readonly, nonatomic) id item;
@property (retain, nonatomic) NSHashTable *connections;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
