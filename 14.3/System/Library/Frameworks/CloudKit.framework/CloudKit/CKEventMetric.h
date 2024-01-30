@class NSUUID, NSString, NSMutableDictionary, NSDate;

@interface CKEventMetric : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasBeenSubmitted;
@property (readonly, nonatomic) NSUUID *metricUUID;
@property (nonatomic) BOOL inferredAllowsCellular;
@property (nonatomic) BOOL inferredPreferAnonymousRequests;
@property (retain, nonatomic) NSString *inferredDeviceIdentifier;
@property (retain, nonatomic) NSString *inferredSourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *inferredSourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *attributes;
@property (readonly, nonatomic) NSMutableDictionary *associatedOperations;
@property (readonly, nonatomic) NSMutableDictionary *associatedOperationGroups;
@property (nonatomic) BOOL isCKInternalMetric;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (copy) NSDate *startTime;
@property (copy) NSDate *endTime;
@property (nonatomic) BOOL isPushTriggerFired;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)initWithEventName:(id)a0;
- (void)setMetricValue:(id)a0 forKey:(id)a1;
- (id)generateEventMetricInfo;
- (id)initWithCoder:(id)a0;
- (BOOL)associateWithCompletedOperation:(id)a0;
- (id)initWithEventName:(id)a0 atTime:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
