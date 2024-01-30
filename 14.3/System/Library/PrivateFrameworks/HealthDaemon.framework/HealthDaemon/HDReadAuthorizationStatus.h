@class NSSet, NSString, HDSQLitePredicate, _HKAuthorizationRecord, NSNumber, NSDate;

@interface HDReadAuthorizationStatus : NSObject

@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) long long authorizationRequest;
@property (readonly, nonatomic) long long authorizationMode;
@property (readonly, copy, nonatomic) _HKAuthorizationRecord *authorizationRecord;
@property (readonly, copy, nonatomic) NSSet *restrictedSourceEntities;
@property (readonly, copy, nonatomic) NSString *restrictedBundleIdentifier;
@property (readonly, copy, nonatomic) NSNumber *deletedObjectBaselineAnchor;
@property (readonly, copy, nonatomic) NSNumber *objectLimitAnchor;
@property (readonly, copy, nonatomic) NSDate *objectLimitModifiedDate;
@property (readonly, nonatomic) BOOL canRead;
@property (readonly, nonatomic) BOOL isAuthorizationDetermined;
@property (readonly, copy, nonatomic) HDSQLitePredicate *authorizationPredicate;

+ (id)notDerminedReadAuthorizationStatus;
+ (id)unrestrictedReadAuthorizationStatus;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (void)disableSharing;
- (BOOL)isEqual:(id)a0;
- (void)disableReading;
- (id)initWithReadAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 restrictedBundleIdentifier:(id)a3 restrictedSourceEntities:(id)a4 deletedObjectBaselineAnchor:(id)a5 objectLimitAnchor:(id)a6 objectLimitModifiedDate:(id)a7;

@end
