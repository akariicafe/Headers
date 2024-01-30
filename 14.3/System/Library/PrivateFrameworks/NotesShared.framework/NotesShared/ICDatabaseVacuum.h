@class NSTimer, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface ICDatabaseVacuum : NSObject

@property (class, retain) ICDatabaseVacuum *activeVacuum;
@property (class, retain) NSDate *lastVacuumDate;

@property (copy, nonatomic) id /* block */ preVacuumHandler;
@property (copy, nonatomic) id /* block */ postVacuumHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSTimer *timer;

+ (id)activeVacuumQueue;
+ (void)startDatabaseVacuumPolicy;
+ (void)startDatabaseVacuumPolicyWithPreVacuumHandler:(id /* block */)a0 postVacuumHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)startDatabaseVacuumPolicy;
- (void)vacuumHTMLDatabase;
- (void)stopDatabaseVacuumPolicy;
- (void)timerFired:(id)a0;
- (void)vacuum;

@end
