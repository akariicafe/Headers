@class NSString, NSArray;

@interface SARemembersGetAppMatchesForIntentResponse : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *jsonMatchSignals;
@property (copy, nonatomic) NSString *matchStatus;
@property (copy, nonatomic) NSArray *matchingBundleIDs;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAppMatchesForIntentResponse;
+ (id)getAppMatchesForIntentResponseWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
