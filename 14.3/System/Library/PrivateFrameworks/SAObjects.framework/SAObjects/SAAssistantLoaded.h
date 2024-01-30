@class NSNumber, NSString, NSArray;

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *appleConnectSessionExpirationTimestamp;
@property (copy, nonatomic) NSString *appleConnectSessionToken;
@property (copy, nonatomic) NSString *dataAnchor;
@property (copy, nonatomic) NSNumber *requestSync;
@property (copy, nonatomic) NSArray *syncAnchors;
@property (copy, nonatomic) NSString *version;

+ (id)assistantLoaded;
+ (id)assistantLoadedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
