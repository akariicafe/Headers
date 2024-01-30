@class NSObject;
@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotificationReceiver : NSObject {
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)postPackedMechanisms:(unsigned long long)a0;

@end
