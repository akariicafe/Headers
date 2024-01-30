@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AudioPlaybackClientService : NSObject <REAudioPlaybackClientService> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_engineQueue;
    struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } _connectionIdentifier;
}

@property (copy, nonatomic) id /* block */ streamTokenDidCompleteCallback;
@property (readonly) unsigned long long connectionIdentifier;
@property (readonly) BOOL connected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
