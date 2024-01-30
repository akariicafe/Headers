@class NSString, NSArray;

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *aliases;
@property (copy, nonatomic) NSArray *longhands;
@property (copy, nonatomic) NSArray *values;
@property (nonatomic) BOOL inherited;

- (id)initWithName:(id)a0;

@end
