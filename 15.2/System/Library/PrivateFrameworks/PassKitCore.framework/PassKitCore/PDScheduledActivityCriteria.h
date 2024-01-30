@class NSString, NSDate;

@interface PDScheduledActivityCriteria : NSObject <NSSecureCoding, NSCopying> {
    NSString *_priorityKey;
    long long _gracePeriod;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL requireMainsPower;
@property (nonatomic) BOOL requireScreenSleep;
@property (nonatomic) BOOL requireNetworkConnectivity;
@property (nonatomic, getter=isRepeating) BOOL repeating;
@property (nonatomic) double repeatInterval;
@property (copy, nonatomic) NSString *reason;

+ (id)priorityActivityCriteriaWithStartDate:(id)a0;
+ (id)maintenanceActivityCriteriaWithStartDate:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)xpcActivityCriteria;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToScheduledAcivityCriteria:(id)a0;
- (unsigned long long)hash;
- (id)initWithPriorityKey:(id)a0 gracePeriod:(long long)a1 startDate:(id)a2;
- (id)debugDescription;

@end
