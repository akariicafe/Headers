@class NSString;

@interface _CDSystemTimeCallbackScheduler : NSObject

@property (readonly, copy, nonatomic) NSString *eventNameRoot;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)scheduleCallbackAtDate:(id)a0 identifier:(id)a1 requiringDeviceWake:(BOOL)a2;
- (void)unscheduleCallbackAtDate:(id)a0 identifier:(id)a1 requiringDeviceWake:(BOOL)a2;
- (id)initWithEventNameRoot:(id)a0;
- (void)_handleCallbackAtDate:(id)a0;

@end
