@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BKHIDEventSenderCache : NSObject <BKIOHIDServiceDisappearanceObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *senderIDToSenderInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sync;
- (void)removeSenderInfo:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)serviceDidDisappear:(id)a0;
- (void)addSenderInfo:(id)a0 forSenderID:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addSenderInfo:(id)a0;
- (id)senderInfoForSenderID:(unsigned long long)a0;

@end
