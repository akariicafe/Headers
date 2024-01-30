@class NSString, NSURL;

@interface SAUIAppPunchOutEvent : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appDisplayName;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *originalCommandId;
@property (copy, nonatomic) NSString *punchOutName;
@property (copy, nonatomic) NSURL *punchOutUri;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appPunchOutEvent;
+ (id)appPunchOutEventWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
