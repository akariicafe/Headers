@class MTTimer;

@interface MTTimerMigrator : NSObject

@property (retain, nonatomic) MTTimer *timer;

- (void)migrateFromOldStorage;
- (void)removeFromOldStorage;
- (void).cxx_destruct;

@end
