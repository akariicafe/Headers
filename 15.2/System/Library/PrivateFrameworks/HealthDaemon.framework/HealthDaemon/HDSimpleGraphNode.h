@class NSString, NSArray;

@interface HDSimpleGraphNode : HDSimpleGraphObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *attributes;
@property (readonly, nonatomic) NSArray *relationships;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRowID:(long long)a0;
- (id)initWithRowID:(long long)a0 name:(id)a1 attributes:(id)a2 relationships:(id)a3;

@end
