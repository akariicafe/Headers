@class NSMutableArray, HFStateDumpBuilderContext;

@interface HFStateDumpBuilder : NSObject

@property (readonly, nonatomic) NSMutableArray *entries;
@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) HFStateDumpBuilderContext *context;

+ (id)builderWithObject:(id)a0 context:(id)a1;
+ (id)_coerceObjectToPropertyList:(id)a0 options:(unsigned long long)a1;

- (id)_formattedObjectForObject:(id)a0 withRepresentation:(unsigned long long)a1 context:(id)a2 options:(unsigned long long)a3;
- (id)buildPropertyListRepresentation;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)_filteredEntries;
- (void)appendObject:(id)a0 withName:(id)a1 context:(id)a2;
- (void).cxx_destruct;
- (void)appendObject:(id)a0 withName:(id)a1;
- (id)buildDescription;
- (void)appendBool:(BOOL)a0 withName:(id)a1 ifEqualTo:(BOOL)a2;
- (void)appendObject:(id)a0 withName:(id)a1 context:(id)a2 options:(unsigned long long)a3;
- (id)initWithObject:(id)a0 context:(id)a1;
- (id)_formattedObjectForEntry:(id)a0 withRepresentation:(unsigned long long)a1;
- (void)appendObject:(id)a0 withName:(id)a1 options:(unsigned long long)a2;
- (void)appendBool:(BOOL)a0 withName:(id)a1;

@end
