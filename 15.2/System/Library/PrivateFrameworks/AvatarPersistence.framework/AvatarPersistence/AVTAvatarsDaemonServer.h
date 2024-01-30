@class NSXPCListener, NSString;
@protocol AVTUILogger, AVTAvatarsDaemonServerDelegate;

@interface AVTAvatarsDaemonServer : NSObject <NSXPCListenerDelegate, AVTAvatarsDaemon, AVTAvatarsDaemonServer>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTAvatarsDaemonServerDelegate> delegate;

- (void)startListening;
- (void)checkIn;
- (id)initWithLogger:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithListener:(id)a0 logger:(id)a1;

@end
