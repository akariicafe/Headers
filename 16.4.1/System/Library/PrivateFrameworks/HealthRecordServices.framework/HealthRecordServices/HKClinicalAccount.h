@class NSUUID, HKClinicalGateway, NSDate, NSString, HKClinicalSharingStatus, HKClinicalGatewayReference, HKClinicalAccountProvenance, NSNumber, HKClinicalBrand;

@interface HKClinicalAccount : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isUserEnabled) BOOL userEnabled;
@property (readonly, nonatomic) BOOL needsRelogin;
@property (readonly, nonatomic) BOOL needsScopeUpgrade;
@property (readonly, copy, nonatomic) NSDate *lastFetchDate;
@property (readonly, copy, nonatomic) NSDate *lastFullFetchDate;
@property (readonly, copy, nonatomic) NSDate *lastFailedFetchDate;
@property (readonly, copy, nonatomic) NSNumber *failedFetchAttemptsCount;
@property (readonly, copy, nonatomic) HKClinicalSharingStatus *clinicalSharingStatus;
@property (readonly, nonatomic) BOOL hasClinicalSharingScopes;
@property (readonly, copy, nonatomic) HKClinicalAccountProvenance *provenance;
@property (readonly, copy, nonatomic) HKClinicalGateway *gateway;
@property (readonly, copy, nonatomic) HKClinicalGatewayReference *newerAvailableGateway;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) HKClinicalBrand *brand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 state:(long long)a1 userEnabled:(BOOL)a2 lastFetchDate:(id)a3 lastFullFetchDate:(id)a4 lastFailedFetchDate:(id)a5 failedFetchAttemptsCount:(id)a6 clinicalSharingStatus:(id)a7 hasClinicalSharingScopes:(BOOL)a8 provenance:(id)a9;

@end
