@class NSString;

@interface _CDSystemTimeCallbackScheduler : NSObject

@property (readonly, copy, nonatomic) NSString *eventNameRoot;

+ (id)sharedInstance;

- (id)initWithEventNameRoot:(id)a0;
- (void)_handleCallbackAtDate:(id)a0;
- (void)unscheduleCallbackAtDate:(id)a0 identifier:(id)a1 requiringDeviceWake:(BOOL)a2;
- (void)scheduleCallbackAtDate:(id)a0 identifier:(id)a1 requiringDeviceWake:(BOOL)a2;
- (void).cxx_destruct;

@end
