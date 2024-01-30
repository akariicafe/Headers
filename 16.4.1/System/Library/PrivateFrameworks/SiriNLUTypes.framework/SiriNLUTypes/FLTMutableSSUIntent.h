@class NSString, NSArray;

@interface FLTMutableSSUIntent : FLTSSUIntent

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *parameters;
@property (copy, nonatomic) NSArray *examples;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
