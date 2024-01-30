@class NSXPCListener, NSString;

@interface DeleteAppFontsDialogHandler : NSObject <NSXPCListenerDelegate, FontInstallViewServiceProtocol>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)doneWithDeleteAppFonts:(BOOL)a0;
- (void)showDialogWithUserInfo:(id)a0;

@end
