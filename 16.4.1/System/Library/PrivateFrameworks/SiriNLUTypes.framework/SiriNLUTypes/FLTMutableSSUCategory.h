@class NSArray;

@interface FLTMutableSSUCategory : FLTSSUCategory

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *groups;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
