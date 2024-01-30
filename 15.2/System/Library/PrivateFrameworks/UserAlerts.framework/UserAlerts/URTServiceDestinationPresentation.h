@class URTAlert, NSString, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue, URTDestinationPresentationDelegate;

@interface URTServiceDestinationPresentation : NSObject <URTAlertServerToClientInterface, URTDestinationPresenting>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteTargetQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, nonatomic) BSServiceConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) URTAlert *alert;
@property (readonly, nonatomic) long long destination;
@property (weak, nonatomic) id<URTDestinationPresentationDelegate> delegate;

- (void)dismiss;
- (void).cxx_destruct;
- (void)invalidate;
- (void)present;
- (void)_handleConnectionInterrupted;
- (void)_handleConnectionActivated;
- (id)initWithAlert:(id)a0 forDestination:(long long)a1;
- (oneway void)handleDefaultAction;
- (oneway void)handleOtherAction;
- (oneway void)handleCancelAction;

@end
