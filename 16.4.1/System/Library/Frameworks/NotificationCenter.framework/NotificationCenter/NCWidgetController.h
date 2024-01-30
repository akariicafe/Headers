@class NSXPCConnection;

@interface NCWidgetController : NSObject <_NCWidgetController_Service_IPC>

@property (retain, nonatomic, getter=_strongReference, setter=_setStrongReference:) NCWidgetController *strongReference;
@property (retain, nonatomic, getter=_connection, setter=_setConnection:) NSXPCConnection *connection;

+ (id)widgetController;
+ (id)widgetContentUnavailableViewWithButtonTitle:(id)a0 buttonAction:(id /* block */)a1;
+ (id)widgetContentUnavailableViewWithTitle:(id)a0;

- (void)dealloc;
- (void)_invalidateConnection;
- (void).cxx_destruct;
- (void)__didReceiveHasContentRequest;
- (id)_connectionForRequest;
- (void)requestRefreshAfterDate:(id)a0 forWidgetWithBundleIdentifier:(id)a1;
- (void)setHasContent:(BOOL)a0 forWidgetWithBundleIdentifier:(id)a1;

@end
