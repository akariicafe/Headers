@class NSArray;

@interface PLLibraryScopeConditionUnknown : PLLibraryScopeCondition

@property (copy, nonatomic) NSArray *unknownSingleQueries;

+ (id)conditionWithSingleQueries:(id)a0 criteria:(unsigned char)a1;
+ (BOOL)supportsQueryKey:(int)a0;

- (unsigned char)type;
- (void).cxx_destruct;
- (id)conditionQuery;

@end
