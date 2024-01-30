@class NSNumber, NSString, NSArray;

@interface MCDeviceUploadOrganization : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *skipItrackCheckNum;
@property (retain, nonatomic) NSNumber *deviceAdditionDepEnabledNum;
@property (retain, nonatomic) NSNumber *idmsWhitelistingEnabledNum;
@property (retain, nonatomic) NSNumber *idmsRemoveDeviceEnabledNum;
@property (retain, nonatomic) NSNumber *deviceAdditionGbiEnabledNum;
@property (readonly, nonatomic) NSString *orgId;
@property (readonly, nonatomic) NSString *orgName;
@property (readonly, nonatomic) NSArray *approvers;
@property (readonly, nonatomic) BOOL skipItrackCheck;
@property (readonly, nonatomic) BOOL deviceAdditionDepEnabled;
@property (readonly, nonatomic) BOOL idmsWhitelistingEnabled;
@property (readonly, nonatomic) BOOL idmsRemoveDeviceEnabled;
@property (readonly, nonatomic) BOOL deviceAdditionGbiEnabled;

- (id)initWithOrgId:(id)a0 orgName:(id)a1 approvers:(id)a2 skipItrackCheck:(BOOL)a3 deviceAdditionDepEnabled:(BOOL)a4 idmsWhitelistingEnabled:(BOOL)a5 idmsRemoveDeviceEnabled:(BOOL)a6 deviceAdditionGbiEnabled:(BOOL)a7;
- (id)initWithDict:(id)a0;
- (void).cxx_destruct;
- (id)_approversFromApproversArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
