@class SAIntentGroupProtobufMessage, NSArray, NSString;

@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand

@property (nonatomic) BOOL allowsPunchOut;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSArray *intentSlotKeyPaths;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (nonatomic) BOOL shouldRunHandleIntent;

+ (id)processIntent;
+ (id)processIntentWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
