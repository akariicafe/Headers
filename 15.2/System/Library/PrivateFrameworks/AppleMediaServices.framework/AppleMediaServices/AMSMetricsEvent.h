@class NSString, NSDictionary, NSMutableDictionary, ACAccount, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface AMSMetricsEvent : NSObject <NSCopying, AMSEngagementEvent>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSString *clientEventID;
@property (readonly, nonatomic) NSDictionary *databaseEventBody;
@property (retain, nonatomic) NSNumber *databasePID;
@property (readonly, nonatomic) BOOL engagementEvent;
@property (nonatomic) BOOL checkDiagnosticsAndUsageSetting;
@property (retain, nonatomic) NSString *diagnosticsSubmissionBugType;
@property (readonly, nonatomic) NSDictionary *dictionaryForPosting;
@property (nonatomic) BOOL preventSampling;
@property (readonly, nonatomic) NSMutableDictionary *underlyingDictionary;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic, getter=isAnonymous) BOOL anonymous;
@property (retain, nonatomic) NSString *app;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSNumber *baseVersion;
@property (retain, nonatomic) NSString *canaryIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSNumber *eventTime;
@property (retain, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSNumber *eventVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (nonatomic) BOOL suppressEngagement;
@property (retain, nonatomic) NSNumber *timezoneOffset;
@property (retain, nonatomic) NSString *topic;
@property (retain) NSDictionary *data;
@property (readonly) NSDictionary *engagementData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isValidJSONProperty:(id)a0;
+ (id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)a0;
+ (id)_topicFromAuthenticationContext:(id)a0;
+ (id)_buyParamsStringFromAuthenticationContext:(id)a0;
+ (id)_buyParamsFromString:(id)a0;
+ (id)createEventFromAuthenticationContext:(id)a0 error:(id)a1;
+ (id)sanitizedObject:(id)a0;

- (id)initWithDatabaseEventBody:(id)a0;
- (void)_setProperty:(id)a0 forBodyKey:(id)a1 clientOnly:(BOOL)a2;
- (id)propertyForBodyKey:(id)a0;
- (id)_propertyForBodyKey:(id)a0 clientOnly:(BOOL)a1;
- (void)addClientIdentifier:(id)a0;
- (void)removePropertiesForKeys:(id)a0;
- (void)setProperty:(id)a0 forBodyKey:(id)a1;
- (id)initForEngagement;
- (void).cxx_destruct;
- (id)initWithUnderlyingDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPropertiesWithDictionary:(id)a0;
- (id)initWithTopic:(id)a0;

@end
