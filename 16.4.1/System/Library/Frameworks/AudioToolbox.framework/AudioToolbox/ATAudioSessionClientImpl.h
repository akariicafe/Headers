@class AVAudioSession, ATAudioSessionPropertyManager;

@interface ATAudioSessionClientImpl : NSObject {
    AVAudioSession *_weakSession;
    AVAudioSession *_strongSession;
    ATAudioSessionPropertyManager *_propertyManager;
    struct unique_ptr<AudioSessionPropertyListeners, std::default_delete<AudioSessionPropertyListeners>> { struct __compressed_pair<AudioSessionPropertyListeners *, std::default_delete<AudioSessionPropertyListeners>> { struct AudioSessionPropertyListeners *__value_; } __ptr_; } _propertyListeners;
    struct map<std::string, std::shared_ptr<OldNotificationCenterObserver>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<OldNotificationCenterObserver>>>> { struct __tree<std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _oldNotificationCenterObservers;
    struct map<std::string, std::shared_ptr<NewNotificationCenterObserver>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<NewNotificationCenterObserver>>>> { struct __tree<std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _newNotificationCenterObservers;
    struct ObjectRef<__CFRunLoop *> { struct __CFRunLoop *mCFObject; } _clientRunLoop;
    struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } _clientRunLoopMode;
}

@property void /* function */ *clientInterruptionListenerProc;
@property void *clientUserData;
@property BOOL isConfigured;
@property (readonly) AVAudioSession *avas;
@property unsigned int interruptionType;

- (void)handleServerReset:(id)a0;
- (id).cxx_construct;
- (void)handleRouteChange:(id)a0;
- (void)handleInterruption:(id)a0;
- (BOOL)isValid;
- (void)callPropertyListeners:(unsigned int)a0 data:(id)a1;
- (int)AudioSessionGetPropertyImpl:(unsigned int)a0 size:(unsigned int *)a1 data:(void *)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithStrongSession:(id)a0;
- (void)addNSNotificationListenerFor:(id)a0 session:(id)a1 selector:(SEL)a2;
- (int)AudioSessionSetActiveImpl:(unsigned char)a0 flags:(unsigned int)a1;
- (void)handleServerDeath:(id)a0;
- (int)AudioSessionGetPropertySizeImpl:(unsigned int)a0 size:(unsigned int *)a1;
- (void)addNSNotificationListenerFor:(id)a0 session:(id)a1 block:(id /* block */)a2;
- (void)addAVAudioSessionKVOObservers:(unsigned int)a0 session:(id)a1;
- (int)AudioSessionRemovePropertyListenerImpl:(unsigned int)a0;
- (int)AudioSessionAddPropertyListenerImpl:(unsigned int)a0 userProc:(void /* function */ *)a1 userData:(void *)a2;
- (id)initWithSession:(id)a0;
- (int)setClientConfiguration:(struct __CFRunLoop { } *)a0 runLoopMode:(const struct __CFString { } *)a1 listenerProc:(void /* function */ *)a2 userData:(void *)a3;
- (void).cxx_destruct;
- (void)removeAVAudioSessionKVOObservers:(unsigned int)a0;
- (int)resetClientConfiguration;
- (int)AudioSessionSetPropertyImpl:(unsigned int)a0 size:(unsigned int)a1 data:(const void *)a2;
- (int)AudioSessionRemovePropertyListenerWithUserDataImpl:(unsigned int)a0 userProc:(void /* function */ *)a1 userData:(void *)a2;

@end
