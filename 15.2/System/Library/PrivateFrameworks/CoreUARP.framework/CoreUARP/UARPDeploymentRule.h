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

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDeploymentAllowed:(id *)a0;
- (id)initWithConfig:(id)a0;
- (void)createSerialNumber;
- (void)calculateDeploymentDay;
- (void)calculateDeploymentPercent;
- (BOOL)isDeploymentAllowedPerGoLiveDate;
- (BOOL)isDeploymentAllowedPerCountryList;
- (BOOL)isDeploymentAllowedPerRampPeriod;
- (BOOL)isDeploymentAllowedPerDeploymentLimit;
- (void)setTestSerialNumber:(id)a0;
- (id)testSerialNumber;
- (void)setDeploymentDay:(id)a0;
- (id)deploymentDay;
- (void)setDeploymentPercent:(id)a0;
- (id)deploymentPercent;
- (void)dumpWithTabDepth:(unsigned long long)a0 dumpString:(id)a1;

@end
