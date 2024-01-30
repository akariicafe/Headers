@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol SPFinderStateXPCProtocol, OS_dispatch_queue;

@interface SPFinderStateManager : NSObject <SPFinderStateManagement>

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPFinderStateXPCProtocol> proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ stateChangedBlock;
@property (copy, nonatomic) id /* block */ stateInfoChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteInterface;
- (void)setActiveCache:(long long)a0 completion:(id /* block */)a1;
- (void)disableFinderModeWithCompletion:(id /* block */)a0;
- (void)stateInfoWithCompletion:(id /* block */)a0;
- (void)fetchFinderState:(id /* block */)a0;
- (void)updateStateBlock;
- (void)dealloc;
- (void)enableFinderModeWithCompletion:(id /* block */)a0;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
