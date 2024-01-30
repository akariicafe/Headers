@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SARemembersGetAppMatchesForIntent : SABaseClientBoundCommand <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *candidateBundleIDs;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *protoEncodedIntent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAppMatchesForIntent;
+ (id)getAppMatchesForIntentWithDictionary:(id)a0 context:(id)a1;

@end
