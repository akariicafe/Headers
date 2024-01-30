@class NSArray;

@interface SAClockDelete : SADomainCommand

@property (copy, nonatomic) NSArray *clockIds;

+ (id)delete;
+ (id)deleteWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
