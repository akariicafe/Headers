@class NSObject;
@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotificationReceiver : NSObject {
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (void)postPackedMechanisms:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
