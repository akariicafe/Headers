@class NSArray, NSString;

@interface SAUserActivity : SADomainObject

@property (copy, nonatomic) NSArray *eligibileFunctions;
@property (copy, nonatomic) NSString *internalGUID;
@property (nonatomic) BOOL isEligibleForAppPunchout;
@property (nonatomic) BOOL isEligibleForDirections;
@property (nonatomic) BOOL isEligibleForHandoff;
@property (nonatomic) BOOL isEligibleForPublicIndexing;
@property (nonatomic) BOOL isEligibleForReminders;
@property (nonatomic) BOOL isEligibleForSearch;

+ (id)userActivity;
+ (id)userActivityWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
