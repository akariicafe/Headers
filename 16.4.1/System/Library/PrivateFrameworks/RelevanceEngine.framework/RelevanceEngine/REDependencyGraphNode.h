@class NSHashTable;

@interface REDependencyGraphNode : NSObject

@property (readonly, nonatomic) id item;
@property (retain, nonatomic) NSHashTable *connections;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;

@end
