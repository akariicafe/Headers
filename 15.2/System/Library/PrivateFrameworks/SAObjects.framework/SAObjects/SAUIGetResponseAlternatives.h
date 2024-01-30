@class NSString;

@interface SAUIGetResponseAlternatives : SAStartRequest

@property (nonatomic) BOOL locallyResolved;
@property (copy, nonatomic) NSString *requestId;

+ (id)getResponseAlternatives;
+ (id)getResponseAlternativesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
