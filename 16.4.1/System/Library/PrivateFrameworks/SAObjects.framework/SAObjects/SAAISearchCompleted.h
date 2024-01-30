@class NSArray;

@interface SAAISearchCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *results;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
