@class HPSHomeAccessoryInterfaceMediator, NSXPCConnection;
@protocol HPSHomeAccessorySettingsConnectionInterfaceDelegate;

@interface HPSHomeAccessorySettingsInterface : NSObject

@property (weak, nonatomic) id<HPSHomeAccessorySettingsConnectionInterfaceDelegate> delegate;
@property (retain, nonatomic) HPSHomeAccessoryInterfaceMediator *mediator;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL isValidConnection;

- (void)handleConnectionInvalidated;
- (void)dealloc;
- (void)handleConnectionInterrupted;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)accessoryDidUpdateValueForEndpointIdentifier:(id)a0 keyPath:(id)a1 value:(id)a2;
- (void)fetchSettingForEndpointIdentifier:(id)a0 keyPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeToSettingForEndpointIdentifier:(id)a0 keyPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)unsubscribeToSettingForEndpointIdentifier:(id)a0 keyPath:(id)a1 completionHandler:(id /* block */)a2;

@end
