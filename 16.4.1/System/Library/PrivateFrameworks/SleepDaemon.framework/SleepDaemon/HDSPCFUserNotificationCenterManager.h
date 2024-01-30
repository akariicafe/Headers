@class NSMutableArray;

@interface HDSPCFUserNotificationCenterManager : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } registrationLock;
@property (readonly, nonatomic) NSMutableArray *registrations;

+ (id)sharedManager;

- (void)_withLock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)cancelNotification:(id)a0 fromCenter:(id)a1;
- (void)postNotification:(id)a0 fromCenter:(id)a1;

@end
