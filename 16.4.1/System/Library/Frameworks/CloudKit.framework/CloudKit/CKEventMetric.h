@class NSString, NSMutableDictionary, NSUUID, NSDate;

@interface CKEventMetric : NSObject <NSSecureCoding> {
    BOOL _hasBeenSubmitted;
    BOOL _inferredAllowsCellular;
    BOOL _inferredAllowsExpensive;
    BOOL _inferredPreferAnonymousRequests;
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

@property (readonly, copy, nonatomic) NSMutableDictionary *attributes;
@property (nonatomic) BOOL isCKInternalMetric;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (copy) NSDate *startTime;
@property (copy) NSDate *endTime;
@property BOOL isPushTriggerFired;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)generateEventMetricInfo;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithEventName:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (BOOL)associateWithCompletedOperation:(id)a0;
- (void)setMetricValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithEventName:(id)a0 atTime:(id)a1;

@end
