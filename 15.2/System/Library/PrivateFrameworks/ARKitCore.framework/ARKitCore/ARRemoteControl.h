@class NSString, ARWeakReference, NSXPCConnection;
@protocol ARControlProtocol;

@interface ARRemoteControl : NSObject <ARRemoteControlProtocol> {
    NSXPCConnection *_connection;
    ARWeakReference *_exportedObjectWeakReference;
}

@property (readonly, nonatomic) id<ARControlProtocol> control;
@property (readonly, nonatomic) id<ARControlProtocol> syncControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidationHandler;
- (void).cxx_destruct;
- (id)init;
- (void)interruptionHandler;
- (void)invalidate;

@end
