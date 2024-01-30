@class HPSHomeAccessoryInterfaceMediator, NSXPCConnection;
@protocol HPSHomeAccessorySettingsConnectionInterfaceDelegate;

@interface HPSHomeAccessorySettingsInterface : NSObject

@property (weak, nonatomic) id<HPSHomeAccessorySettingsConnectionInterfaceDelegate> delegate;
@property (retain, nonatomic) HPSHomeAccessoryInterfaceMediator *mediator;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL isValidConnection;

- (id)initWithDelegate:(id)a0;
- (void)handleConnectionInvalidated;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleConnectionInterrupted;
- (void)accessoryDidUpdateValueForEndPointIdentifier:(id)a0 keyPath:(id)a1 value:(id)a2;
- (void)fetchAccessorySettingsValueForEndPointIdentifier:(id)a0 keyPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)susbcribeToAccessorySettingsForEndPointIdentifier:(id)a0 keypath:(id)a1 completionHandler:(id /* block */)a2;
- (void)unsubscribeToAccessorySettingsForEndPointIdentifier:(id)a0 keypath:(id)a1 completionHandler:(id /* block */)a2;

@end
