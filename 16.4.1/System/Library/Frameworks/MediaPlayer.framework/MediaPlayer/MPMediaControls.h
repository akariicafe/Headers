@class NSXPCListener, NSString, NSXPCConnection, MPMediaControlsConfiguration, UIView;

@interface MPMediaControls : NSObject <MPMediaControlsProtocol, NSXPCListenerDelegate> {
    BOOL _shouldObserveRoutingContextUIDChanges;
    unsigned long long _dismissalReason;
    NSString *_tappedCustomRowIdentifier;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) MPMediaControlsConfiguration *configuration;
@property (copy, nonatomic) id /* block */ dismissHandlerWithReason;
@property (retain, nonatomic) UIView *sourceView;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ customRowDidTapHandler;
@property (copy, nonatomic) NSString *routeUID;
@property (nonatomic) double preferredWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void)dismiss;
- (void)setDismissalReason:(unsigned long long)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)present;
- (void)dealloc;
- (id)init;
- (void)openConnection;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)startPrewarming;
- (unsigned long long)_MPRouteSharingPolicyToAVRouteSharingPolicy:(unsigned long long)a0;
- (void)_audioSessionRoutingContextDidChangeNotification;
- (id)_dismissalReasonString:(unsigned long long)a0;
- (long long)_mediaControlsStyleForRouteSharingPolicy:(unsigned long long)a0;
- (BOOL)_shouldUpdateStyleForCurrentConfigurationStyle:(long long)a0;
- (void)_updateAudioSessionRoutingContext;
- (void)addCustomRowWithType:(id)a0 titleOverride:(id)a1 identifier:(id)a2;
- (id)initWithConfiguration:(id)a0 shouldObserveRoutingContextUIDChanges:(BOOL)a1;
- (id)initWithRouteSharingPolicy:(unsigned long long)a0 routingContextUID:(id)a1;
- (void)setTappedCustomRowIdentifier:(id)a0;
- (void)stopPrewarming;

@end
