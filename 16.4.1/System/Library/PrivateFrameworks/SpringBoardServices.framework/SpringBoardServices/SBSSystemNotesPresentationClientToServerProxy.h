@class SBSSystemNotesPresentationConfiguration, NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue, SBSSystemNotesPresentationServerToClientInterface;

@interface SBSSystemNotesPresentationClientToServerProxy : NSObject <SBSSystemNotesPresentationClientToServerInterface, BSInvalidatable> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    SBSSystemNotesPresentationConfiguration *_requestedConfiguration;
}

@property (weak, nonatomic) id<SBSSystemNotesPresentationServerToClientInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)_setupAndActivateConnection;
- (oneway void)activateConfiguration:(id)a0;
- (oneway void)presentWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
