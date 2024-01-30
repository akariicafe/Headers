@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupLaunchAppWithIntent : SABaseClientBoundCommand

@property (nonatomic) BOOL doNotDismissSiri;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *handledIntent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *handledIntentResponse;
@property (copy, nonatomic) NSString *jsonEncodedHandledIntent;
@property (copy, nonatomic) NSString *jsonEncodedHandledIntentResponse;

+ (id)launchAppWithIntent;
+ (id)launchAppWithIntentWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
