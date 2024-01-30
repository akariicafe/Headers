@class NSString, NSMutableDictionary, NSUUID, NSDate;

@interface CKEventMetric : NSObject <NSSecureCoding> {
    BOOL _hasBeenSubmitted;
    BOOL _inferredAllowsCellular;
    BOOL _inferredAllowsExpensive;
    BOOL _inferredPreferAnonymousRequests;
    BOOL _isCKInternalMetric;
    NSUUID *_metricUUID;
    long long _inferredDatabaseScope;
    NSString *_inferredDeviceIdentifier;
    NSString *_inferredSourceApplicationBundleIdentifier;
    NSString *_inferredApplicationBundleIdentifierOverrideForContainerAccess;
    NSString *_inferredApplicationBundleIdentifierOverrideForNetworkAttribution;
    NSString *_inferredSourceApplicationSecondaryIdentifier;
    NSMutableDictionary *_associatedOperations;
    NSMutableDictionary *_associatedOperationGroups;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *attributes;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (copy) NSDate *startTime;
@property (copy) NSDate *endTime;
@property (nonatomic) BOOL isPushTriggerFired;

- (id)generateEventMetricInfo;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setMetricValue:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)associateWithCompletedOperation:(id)a0;
- (id)initWithEventName:(id)a0;
- (id)initWithEventName:(id)a0 atTime:(id)a1;

@end
