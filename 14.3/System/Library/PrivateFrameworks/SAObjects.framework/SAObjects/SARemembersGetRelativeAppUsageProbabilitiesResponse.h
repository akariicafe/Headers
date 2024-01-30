@class NSDictionary, NSString;

@interface SARemembersGetRelativeAppUsageProbabilitiesResponse : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *bundleIDPercentages;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getRelativeAppUsageProbabilitiesResponse;
+ (id)getRelativeAppUsageProbabilitiesResponseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
