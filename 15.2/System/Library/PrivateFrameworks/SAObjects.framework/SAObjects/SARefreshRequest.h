@class NSData, NSString;

@interface SARefreshRequest : SAStartRequest

@property (copy, nonatomic) NSData *nlResultState;
@property (copy, nonatomic) NSData *serializedIntent;
@property (copy, nonatomic) NSString *source;

+ (id)refreshRequest;
+ (id)refreshRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
