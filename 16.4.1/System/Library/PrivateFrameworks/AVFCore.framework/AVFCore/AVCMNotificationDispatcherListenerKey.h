@class NSString, AVWeakReference;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {
    AVWeakReference *_weakReferenceToListener;
    void /* function */ *_callback;
    NSString *_name;
    void *_object;
}

+ (id)listenerKeyWithWeakReferenceToListener:(id)a0 callback:(void /* function */ *)a1 name:(id)a2 object:(void *)a3;

- (id)initWithWeakReferenceToListener:(id)a0 callback:(void /* function */ *)a1 name:(id)a2 object:(void *)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;

@end
