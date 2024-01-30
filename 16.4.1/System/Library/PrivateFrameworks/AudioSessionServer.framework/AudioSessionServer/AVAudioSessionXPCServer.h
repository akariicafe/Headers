@class NSXPCListener, NSString, NSXPCInterface, NSMutableArray;
@protocol AVAudioSessionServerDelegate;

@interface AVAudioSessionXPCServer : NSObject <NSXPCListenerDelegate> {
    NSMutableArray *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_callbackInterface;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> { void *__value_; } __ptr_; } _clientDeathPromise;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> { void *__value_; } __ptr_; } _deallocPromise;
    BOOL _needsDefaultWorldInit;
    struct World { } _world;
    id<AVAudioSessionServerDelegate> _serverDelegate;
}

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (void)init2;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void)start;
- (void)removeConnection:(id)a0;
- (void).cxx_destruct;

@end
