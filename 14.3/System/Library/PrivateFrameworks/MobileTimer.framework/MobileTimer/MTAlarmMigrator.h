@class MTAlarm, NSMutableArray;

@interface MTAlarmMigrator : NSObject

@property (retain, nonatomic) NSMutableArray *alarms;
@property (retain, nonatomic) MTAlarm *sleepAlarm;

- (void).cxx_destruct;
- (void)migrateFromOldStorage;
- (void)removeFromOldStorage;
- (void)cleanUpOldNotifications;

@end
