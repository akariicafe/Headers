@class NSString;
@protocol CMMotionAlarmDelegateProtocol;

@interface CMMotionAlarmManager : NSObject

@property (nonatomic) id<CMMotionAlarmDelegateProtocol> delegate;
@property (readonly, nonatomic) NSString *name;

+ (BOOL)isAvailable;
+ (id)defaultManager;

- (id)initWithName:(id)a0;
- (void)dealloc;
- (id)init;
- (BOOL)registerAlarmWithName:(id)a0 type:(unsigned int)a1 duration:(unsigned int)a2 repeats:(BOOL)a3 error:(id *)a4;
- (BOOL)unregisterAlarmWithName:(id)a0 error:(id *)a1;
- (BOOL)acknowledgeAlarmWithName:(id)a0 error:(id *)a1;
- (BOOL)acknowledgeAlarm:(id)a0 error:(id *)a1;
- (BOOL)launchRemoteAppWithError:(id *)a0;
- (BOOL)unregisterAlarm:(id)a0 error:(id *)a1;

@end
