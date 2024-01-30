@class NSString;
@protocol CMMotionAlarmDelegateProtocol;

@interface CMMotionAlarmManager : NSObject

@property (nonatomic) id<CMMotionAlarmDelegateProtocol> delegate;
@property (readonly, nonatomic) NSString *name;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (BOOL)unregisterAlarm:(id)a0 error:(id *)a1;
- (BOOL)unregisterAlarmWithName:(id)a0 error:(id *)a1;
- (BOOL)acknowledgeAlarmWithName:(id)a0 error:(id *)a1;
- (BOOL)registerAlarmWithName:(id)a0 type:(unsigned int)a1 duration:(unsigned int)a2 repeats:(BOOL)a3 error:(id *)a4;
- (BOOL)launchRemoteAppWithError:(id *)a0;
- (BOOL)acknowledgeAlarm:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0;

@end
