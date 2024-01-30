@class NSArray, NSString;

@interface SARemembersGetRelativeAppUsageProbabilities : SABaseClientBoundCommand <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *bundleIDs;
@property (nonatomic) long long days;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getRelativeAppUsageProbabilities;
+ (id)getRelativeAppUsageProbabilitiesWithDictionary:(id)a0 context:(id)a1;

@end
