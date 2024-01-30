@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CoreSpeechXPCFakeModelMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int fakeAssetRollNotificationRegistrationToken;
@property (retain) NSString *lastFakeModelUsedHash;
@property BOOL shouldRollFakeModel;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)_registerForFakeAssetRollNotification;

@end
