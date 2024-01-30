@class NSNumber, NSString, NSDate;

@interface SSWatchMetricsEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSNumber *adamId;
@property (copy, nonatomic) NSString *cohortID;
@property (copy, nonatomic) NSNumber *pid;
@property (copy, nonatomic) NSNumber *appExternalVersionID;
@property (copy, nonatomic) NSNumber *purchaserDsid;
@property (copy, nonatomic) NSNumber *userDsid;
@property (copy, nonatomic) NSString *appExtensionVersion;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *downloadVarietyID;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long installType;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *versionString;
@property (copy, nonatomic) NSString *watchGuid;
@property (copy, nonatomic) NSString *watchSerial;
@property (copy, nonatomic) NSString *watchSize;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_appCohortID:(id)a0;
- (id)financeDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
