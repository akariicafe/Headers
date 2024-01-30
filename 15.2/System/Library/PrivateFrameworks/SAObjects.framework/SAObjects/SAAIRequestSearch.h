@class NSString;

@interface SAAIRequestSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *acousticIdSearchSessionId;

+ (id)requestSearch;
+ (id)requestSearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
