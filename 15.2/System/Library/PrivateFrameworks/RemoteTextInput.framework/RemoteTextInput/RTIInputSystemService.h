@class NSXPCListener, NSString, RTIInputSystemServiceSession, NSXPCListenerEndpoint, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, RTIInputSystemDelegate;

@interface RTIInputSystemService : NSObject <NSXPCListenerDelegate, RTIInputSystemSessionDelegate> {
    NSMutableSet *_sessions;
}

@property (retain, nonatomic) NSString *machName;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (weak, nonatomic) id<RTIInputSystemDelegate> delegate;
@property (readonly, nonatomic) RTIInputSystemServiceSession *currentSession;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServiceWithMachName:(id)a0;
+ (Class)serviceSessionClass;

- (void)inputSession:(id)a0 documentStateDidChange:(id)a1;
- (void)inputSession:(id)a0 documentTraitsDidChange:(id)a1;
- (void)_createListenerIfNecessary;
- (void)_destroyListenerIfNecessary;
- (id)initWithMachName:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)inputSessionDidDie:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)inputSessionDidBegin:(id)a0;
- (void)inputSession:(id)a0 didChangePause:(BOOL)a1 withReason:(id)a2;
- (void)inputSessionDidEnd:(id)a0;

@end
