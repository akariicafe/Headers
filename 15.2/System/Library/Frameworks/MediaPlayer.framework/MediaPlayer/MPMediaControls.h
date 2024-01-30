@class NSXPCListener, NSString, NSXPCConnection, MPMediaControlsConfiguration, UIView;

@interface MPMediaControls : NSObject <MPMediaControlsProtocol, NSXPCListenerDelegate> {
    BOOL _shouldObserveRoutingContextUIDChanges;
    unsigned long long _dismissalReason;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) MPMediaControlsConfiguration *configuration;
@property (copy, nonatomic) id /* block */ dismissHandlerWithReason;
@property (retain, nonatomic) UIView *sourceView;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) NSString *routeUID;
@property (nonatomic) double preferredWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void)openConnection;
- (void)stopPrewarming;
- (void)startPrewarming;
- (void)dismiss;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRouteSharingPolicy:(unsigned long long)a0 routingContextUID:(id)a1;
- (void)_audioSessionRoutingContextDidChangeNotification;
- (id)initWithConfiguration:(id)a0 shouldObserveRoutingContextUIDChanges:(BOOL)a1;
- (void)_updateAudioSessionRoutingContext;
- (long long)_mediaControlsStyleForRouteSharingPolicy:(unsigned long long)a0;
- (unsigned long long)_MPRouteSharingPolicyToAVRouteSharingPolicy:(unsigned long long)a0;
- (id)_dismissalReasonString:(unsigned long long)a0;
- (BOOL)_shouldUpdateStyleForCurrentConfigurationStyle:(long long)a0;
- (void)dealloc;
- (void)setDismissalReason:(unsigned long long)a0;
- (void)present;

@end
