@class MTTimer;

@interface MTTimerMigrator : NSObject

@property (retain, nonatomic) MTTimer *timer;

- (void).cxx_destruct;
- (void)migrateFromOldStorage;
- (void)removeFromOldStorage;

@end
