@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupHandleIntent : SABaseClientBoundCommand

@property (nonatomic) BOOL allowsPunchOut;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;

+ (id)handleIntent;
+ (id)handleIntentWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
