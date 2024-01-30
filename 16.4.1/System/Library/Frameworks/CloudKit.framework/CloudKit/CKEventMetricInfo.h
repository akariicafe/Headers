@class NSUUID, NSString, NSDictionary, NSDate;

@interface CKEventMetricInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *metricUUID;
@property (readonly, nonatomic) BOOL isCKInternalMetric;
@property (readonly, nonatomic) BOOL isPushTriggerFired;
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSDate *startTime;
@property (readonly, copy, nonatomic) NSDate *endTime;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSDictionary *associatedOperations;
@property (readonly, copy, nonatomic) NSDictionary *associatedOperationGroups;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventMetric:(id)a0;
- (void).cxx_destruct;

@end
