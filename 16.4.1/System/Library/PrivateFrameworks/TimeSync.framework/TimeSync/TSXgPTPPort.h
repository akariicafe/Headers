@class NSString, NSPointerArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSXgPTPPort : TSXAnonymousClient <TSXgPTPPortClientProtocol> {
    NSObject<OS_dispatch_queue> *_internalPropertyUpdateQueue;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
}

@property (nonatomic) unsigned short portNumber;
@property (nonatomic) int portRole;
@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic) int portType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverProtocol;
+ (id)frameworkClassNameForDaemonClassName:(id)a0;
+ (id)clientProtocol;
+ (id)xpcClassNameForDaemonClassName:(id)a0;
+ (id)gPTPPortWithClockIdentifier:(unsigned long long)a0 portNumber:(unsigned short)a1;

- (void)interruptedConnection;
- (id)initWithEndpoint:(id)a0;
- (void)invalidatedConnection;
- (id)exportedObject;
- (void).cxx_destruct;
- (void)_updateFromProperties:(id)a0;
- (void)addConnectionClient:(id)a0;
- (void)removeConnectionClient:(id)a0;
- (void)serviceTerminated;
- (BOOL)startAutomaticPropertyUpdates;
- (BOOL)stopAutomaticPropertyUpdates;
- (void)updateProperties;
- (void)updatedPortProperties:(id)a0;

@end
