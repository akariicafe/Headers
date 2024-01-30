@class NSHashTable;

@interface REDependencyGraphNode : NSObject

@property (readonly, nonatomic) id item;
@property (retain, nonatomic) NSHashTable *connections;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
