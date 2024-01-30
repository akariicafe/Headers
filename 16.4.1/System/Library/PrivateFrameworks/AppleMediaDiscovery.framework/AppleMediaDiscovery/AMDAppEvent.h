@class NSString;

@interface AMDAppEvent : NSManagedObject

@property (nonatomic) long long adamId;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) float batteryUsage;
@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic) short eventSubType;
@property (copy, nonatomic) NSString *eventVersion;
@property (nonatomic) long long foregroundDuration;
@property (nonatomic) float latitude;
@property (nonatomic) float locationAccuracy;
@property (nonatomic) float longitude;
@property (copy, nonatomic) NSString *miscData;
@property (nonatomic) short networkType;
@property (nonatomic) short platform;
@property (nonatomic) long long storageUsed;
@property (nonatomic) long long time;
@property (nonatomic) long long timeZoneOffset;
@property (nonatomic) short type;
@property (copy, nonatomic) NSString *userId;

+ (id)getSegmentsWithLookBack:(id)a0 andRecencyThreshold:(id)a1 andFrequencyThreshold:(id)a2 andDurationThreshold:(id)a3 withUserId:(id)a4 error:(id *)a5;
+ (id)getEventType:(id)a0;
+ (id)fetchRequest;
+ (id)getEventSubType:(id)a0;
+ (BOOL)validateInput:(id)a0;
+ (unsigned int)saveEvent:(id)a0 error:(id *)a1;
+ (id)getEventPlatform:(id)a0;
+ (id)fetchEventsWithPredicate:(id)a0 error:(id *)a1;
+ (id)fetchEvents:(id *)a0;
+ (id)deleteAllEventsForUser:(id)a0 error:(id *)a1;
+ (id)deleteAppEventsOlderThan:(unsigned long long)a0 forEventType:(id)a1 withPlatform:(id)a2 error:(id *)a3;
+ (id)deleteUsingPredicates:(id)a0 error:(id *)a1;
+ (id)deleteAllEvents:(id *)a0;

- (void)populateRecord:(id)a0;

@end
