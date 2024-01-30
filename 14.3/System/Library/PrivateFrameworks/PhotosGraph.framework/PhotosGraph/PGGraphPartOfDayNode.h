@class NSString;

@interface PGGraphPartOfDayNode : PGGraphOptimizedNode

@property (readonly) NSString *name;
@property (readonly) unsigned long long partOfDay;

+ (id)filter;
+ (unsigned long long)partOfDayForPartOfDayName:(id)a0;
+ (id)stringValueForPartOfDay:(unsigned long long)a0;
+ (id)partOfDayNameForPartOfDay:(unsigned long long)a0;

- (id)init;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)description;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
