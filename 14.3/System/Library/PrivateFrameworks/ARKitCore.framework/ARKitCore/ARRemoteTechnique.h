@class ARServerConnection, NSString, NSMutableArray;

@interface ARRemoteTechnique : ARTechnique <ARRemoteTechniqueClient, ARServerConnectionDelegate> {
    NSMutableArray *_inflightContexts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inflightContextsLock;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) ARServerConnection *serverConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceProxy;
- (id)initWithListenerEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)processData:(id)a0;
- (void)dealloc;
- (id)initWithServiceName:(id)a0;
- (void)prepare:(BOOL)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (long long)captureBehavior;
- (void)techniqueDidOutputResultData:(id)a0 timestamp:(double)a1 context:(id)a2;
- (id)initWithServerConnection:(id)a0;
- (void)techniqueDidFailWithError:(id)a0;
- (void)serverConnectionInterrupted:(id)a0;
- (void)serverConnectionInvalidated:(id)a0;
- (long long)numberOfActiveConnections;

@end
