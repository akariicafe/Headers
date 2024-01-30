@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVCMNotificationDispatcher : NSObject {
    struct opaqueCMNotificationCenter { } *_cmNotificationCenter;
    NSObject<OS_dispatch_queue> *_listenerObjectsQueue;
    NSMutableDictionary *_observersForListenerKeys;
}

@property (readonly, nonatomic) struct opaqueCMNotificationCenter { } *CMNotificationCenter;

+ (void)initialize;
+ (id)notificationDispatcherForCMNotificationCenter:(struct opaqueCMNotificationCenter { } *)a0;

- (id)initWithCMNotificationCenter:(struct opaqueCMNotificationCenter { } *)a0;
- (id)init;
- (void)removeListenerWithWeakReference:(id)a0 callback:(void /* function */ *)a1 name:(struct __CFString { } *)a2 object:(void *)a3;
- (void)dealloc;
- (void)addListenerWithWeakReference:(id)a0 callback:(void /* function */ *)a1 name:(struct __CFString { } *)a2 object:(void *)a3 flags:(unsigned int)a4;
- (id)_copyAndRemoveObserverForWeakReferenceToListener:(id)a0 callback:(void /* function */ *)a1 name:(struct __CFString { } *)a2 object:(void *)a3;

@end
