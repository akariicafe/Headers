@class NSUUID, NSString, NSData, NSDate;

@interface HDFitnessMachineSessionRecoveryConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) NSUUID *machineUUID;
@property (readonly, nonatomic) unsigned long long machineType;
@property (readonly, copy, nonatomic) NSString *machineName;
@property (copy, nonatomic) NSString *machineBrand;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) NSDate *machineStartDate;
@property (readonly, nonatomic) NSDate *machinePreferredUntilDate;
@property (readonly, nonatomic) NSData *nfcSessionIDData;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSessionUUID:(id)a0 machineUUID:(id)a1 machineType:(unsigned long long)a2 machineName:(id)a3 machineBrand:(id)a4 activityType:(unsigned long long)a5 machineStartDate:(id)a6 machinePreferredUntilDate:(id)a7 nfcSessionIDData:(id)a8;

@end
