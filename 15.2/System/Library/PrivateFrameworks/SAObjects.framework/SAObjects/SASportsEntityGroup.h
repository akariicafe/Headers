@class NSArray, NSString;

@interface SASportsEntityGroup : SASportsEntity

@property (copy, nonatomic) NSArray *entities;
@property (copy, nonatomic) NSString *groupType;

+ (id)entityGroup;
+ (id)entityGroupWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
