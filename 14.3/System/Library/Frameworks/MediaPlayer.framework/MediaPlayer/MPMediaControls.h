@class NSXPCListener, NSString, NSXPCConnection, MPMediaControlsConfiguration;

@interface MPMediaControls : NSObject <MPMediaControlsProtocol, NSXPCListenerDelegate> {
    BOOL _shouldObserveRoutingContextUIDChanges;
    unsigned long long _dismissalReason;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) MPMediaControlsConfiguration *configuration;
@property (copy, nonatomic) id /* block */ dismissHandlerWithReason;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (retain, nonatomic) NSString *routeUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void)present;
- (void)openConnection;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDismissalReason:(unsigned long long)a0;
- (void)startPrewarming;
- (void)_updateAudioSessionRoutingContext;
- (id)initWithRouteSharingPolicy:(unsigned long long)a0 routingContextUID:(id)a1;
- (void)_audioSessionRoutingContextDidChangeNotification;
- (id)initWithConfiguration:(id)a0 shouldObserveRoutingContextUIDChanges:(BOOL)a1;
- (id)_dismissalReasonString:(unsigned long long)a0;
- (long long)_mediaControlsStyleForRouteSharingPolicy:(unsigned long long)a0;
- (unsigned long long)_MPRouteSharingPolicyToAVRouteSharingPolicy:(unsigned long long)a0;
- (BOOL)_shouldUpdateStyleForCurrentConfigurationStyle:(long long)a0;
- (id)initWithConfiguration:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stopPrewarming;
- (void)dismiss;

@end
