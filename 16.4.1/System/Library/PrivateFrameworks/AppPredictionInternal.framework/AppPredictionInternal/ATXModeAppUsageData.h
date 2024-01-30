@class NSSet, NSMutableDictionary, NSArray, NSDate;

@interface ATXModeAppUsageData : NSObject

@property (retain, nonatomic) NSSet *bundleIDs;
@property (retain, nonatomic) NSMutableDictionary *appCategoryDict;
@property (retain, nonatomic) NSMutableDictionary *appNameDict;
@property (retain, nonatomic) NSMutableDictionary *modeCounts;
@property (retain, nonatomic) NSMutableDictionary *modeTime;
@property (retain, nonatomic) NSMutableDictionary *launchCounts;
@property (retain, nonatomic) NSMutableDictionary *screenTime;
@property (retain, nonatomic) NSMutableDictionary *notificationUsage;
@property (retain, nonatomic) NSMutableDictionary *dndUsage;
@property (retain, nonatomic) NSMutableDictionary *deviceUnlockActivity;
@property (retain, nonatomic) NSMutableDictionary *peopleStats;
@property (retain, nonatomic) NSDate *sinceDate;
@property (retain, nonatomic) NSDate *updateDate;
@property (retain, nonatomic) NSDate *firstModeSessionDate;
@property (nonatomic) double timespan;
@property (retain, nonatomic) NSArray *modeTimeline;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;

@end
