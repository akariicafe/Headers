@class MTAlarm, NSMutableArray;

@interface MTAlarmMigrator : NSObject

@property (retain, nonatomic) NSMutableArray *alarms;
@property (retain, nonatomic) MTAlarm *sleepAlarm;

- (void)migrateFromOldStorage;
- (void)removeFromOldStorage;
- (void).cxx_destruct;
- (void)cleanUpOldNotifications;

@end
