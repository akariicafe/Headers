@class NSUUID, NSString, NSDictionary, NSDate, NSMutableDictionary;

@interface CKEventMetricInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *metricUUID;
@property (readonly, nonatomic) BOOL isCKInternalMetric;
@property (readonly, nonatomic) BOOL isPushTriggerFired;
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSMutableDictionary *associatedOperations;
@property (readonly, nonatomic) NSMutableDictionary *associatedOperationGroups;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEventMetric:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
