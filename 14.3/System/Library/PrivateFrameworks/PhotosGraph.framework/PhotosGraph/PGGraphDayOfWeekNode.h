@class NSString;

@interface PGGraphDayOfWeekNode : PGGraphOptimizedNode

@property (nonatomic) long long dayOfWeek;
@property (readonly) NSString *name;

+ (id)nameForDayOfWeek:(long long)a0;
+ (long long)dayOfWeekForName:(id)a0;

- (id)init;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)description;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
