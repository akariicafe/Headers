@class NSString;

@interface SXJSONDataTableSelector : SXJSONObject <SXDataTableSelector>

@property (nonatomic) unsigned long long numberOfConditions;
@property (nonatomic) unsigned long long selectorWeight;
@property (readonly, nonatomic) unsigned long long rowIndex;
@property (readonly, nonatomic) unsigned long long columnIndex;
@property (readonly, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)propertyList;
- (void)commonInit;
- (id)initWithJSONObject:(id)a0 andVersion:(id)a1;
- (unsigned long long)evenColumnsWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)evenRowsWithValue:(id)a0 withType:(int)a1;
- (id)initWithJSONData:(id)a0 andVersion:(id)a1;
- (unsigned long long)oddColumnsWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)oddRowsWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)selectorBooleanForValue:(id)a0;
- (unsigned long long)weightForSelectorKey:(id)a0;

@end
