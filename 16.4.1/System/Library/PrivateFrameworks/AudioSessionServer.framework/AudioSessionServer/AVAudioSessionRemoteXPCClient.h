@class AVAudioSessionXPCServer, NSXPCConnection, AVAudioSessionXPCClientRelay;
@protocol AVAudioSessionServerDelegate;

@interface AVAudioSessionRemoteXPCClient : NSObject <SessionManagerXPCProtocol> {
    AVAudioSessionXPCServer *_server;
    struct ProcessInfo { struct ProcessToken { unsigned int mValue; } token; NSXPCConnection *xpcConnection; AVAudioSessionXPCClientRelay *mClientRelay; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } mProcessName; } _clientProcess;
    AVAudioSessionXPCClientRelay *_clientRelay;
    id<AVAudioSessionServerDelegate> _serverDelegate;
    BOOL _invalidated;
    const char *_replyWatchdogFunctionName;
    struct time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>> { struct duration<long long, std::ratio<1, 1000000>> { long long __rep_; } __d_; } _replyWatchdogMinTimestamp;
    struct reply_watchdog_factory { BOOL mDebugging; int mDefaultTimeoutMS; struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } mTimeoutHandler; } _defaultReplyWatchdogFactory;
    struct reply_watchdog_factory { BOOL mDebugging; int mDefaultTimeoutMS; struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } mTimeoutHandler; } _longReplyWatchdogFactory;
}

- (id)setPropertiesMX:(unsigned int)a0 token:(const struct { unsigned int x0[8]; } *)a1 values:(id)a2;
- (void)destroySession:(unsigned int)a0 reply:(id /* block */)a1;
- (void)sleepWithReply:(unsigned int)a0 reply:(id /* block */)a1;
- (id).cxx_construct;
- (struct tuple<NSError *, NSDictionary *> { struct __tuple_impl<std::__tuple_indices<0, 1>, NSError *, NSDictionary *> { id x0; id x1; } x0; })setPriorityPropertiesMX:(unsigned int)a0 token:(const struct { unsigned int x0[8]; } *)a1 values:(id)a2;
- (void)removeMXNotificationListener:(unsigned int)a0 notificationName:(id)a1 reply:(id /* block */)a2;
- (void)activateSession:(unsigned int)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)simulatePrimarySessionCreationInsideServerWithReply:(id /* block */)a0;
- (void)setMXPropertyGenericPipe:(unsigned int)a0 values:(id)a1 reply:(id /* block */)a2;
- (void)getDeferredMessages:(unsigned int)a0 reply:(id /* block */)a1;
- (struct World { } *)world;
- (void)getProperty:(unsigned int)a0 propertyName:(id)a1 MXProperty:(BOOL)a2 reply:(id /* block */)a3;
- (void)addMXNotificationListener:(unsigned int)a0 notificationName:(id)a1 reply:(id /* block */)a2;
- (void)pingWithReply:(id /* block */)a0;
- (void)createProxySession:(unsigned int)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (void)getIOControllerPeriod:(unsigned int)a0 decoupledInput:(BOOL)a1 reply:(id /* block */)a2;
- (void)silenceOutput:(unsigned int)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)updateMicrophonePermissionWithReply:(id /* block */)a0;
- (void)verifySessionExists:(unsigned int)a0 reply:(id /* block */)a1;
- (void)getMXPropertyGenericPipe:(unsigned int)a0 propertyName:(id)a1 reply:(id /* block */)a2;
- (id)clientRelay;
- (void)setProperties:(unsigned int)a0 values:(id)a1 MXProperties:(BOOL)a2 reply:(id /* block */)a3;
- (id)initWithServer:(id)a0 process:(struct ProcessInfo { struct ProcessToken { unsigned int x0; } x0; id x1; id x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; })a1 delegate:(id)a2;
- (void)invalidate;
- (void)setSession:(unsigned int)a0 decoupledInput:(BOOL)a1 hasIOEventListeners:(BOOL)a2 reply:(id /* block */)a3;
- (void)deactivateSession:(unsigned int)a0 options:(unsigned long long)a1 priority:(id)a2 reply:(id /* block */)a3;
- (void)createSession:(unsigned long long)a0 sourceSessionID:(unsigned int)a1 nameOrDeviceUID:(id)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;

@end
