@class NSString, NSArray, NSDate, NSObject, NSNumber;
@protocol OS_os_log;

@interface UARPDeploymentRule : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_os_log> *_log;
    NSString *_currentISOCountryCode;
    NSDate *_goLiveDate;
    NSArray *_countryList;
    NSNumber *_rampPeriod;
    NSNumber *_deploymentLimit;
    NSString *_testSerialNumber;
    NSNumber *_deploymentPercent;
    NSNumber *_deploymentDay;
    NSString *_serialNumber;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dumpWithTabDepth:(unsigned long long)a0 dumpString:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConfig:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)calculateDeploymentDay;
- (void)calculateDeploymentPercent;
- (void)createSerialNumber;
- (id)deploymentDay;
- (id)deploymentPercent;
- (BOOL)isDeploymentAllowed:(id *)a0;
- (BOOL)isDeploymentAllowedPerCountryList;
- (BOOL)isDeploymentAllowedPerDeploymentLimit;
- (BOOL)isDeploymentAllowedPerGoLiveDate;
- (BOOL)isDeploymentAllowedPerRampPeriod;
- (void)setDeploymentDay:(id)a0;
- (void)setDeploymentPercent:(id)a0;
- (void)setTestSerialNumber:(id)a0;
- (id)testSerialNumber;

@end
