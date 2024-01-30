@class NSString;

@interface SAAIRequestSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *acousticIdSearchSessionId;

+ (id)requestSearch;
+ (id)requestSearchWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
