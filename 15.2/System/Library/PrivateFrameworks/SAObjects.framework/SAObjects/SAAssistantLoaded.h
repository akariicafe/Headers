@class NSString, NSNumber, NSArray;

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appleConnectSessionToken;
@property (copy, nonatomic) NSString *dataAnchor;
@property (copy, nonatomic) NSNumber *requestSync;
@property (copy, nonatomic) NSArray *syncAnchors;
@property (copy, nonatomic) NSString *version;

+ (id)assistantLoaded;
+ (id)assistantLoadedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
