@class _TtC11ActivityKit37ActivityPresentationObservationClient;

@interface ACActivityPresentationListener : NSObject

@property (retain, nonatomic) _TtC11ActivityKit37ActivityPresentationObservationClient *client;

- (id)init;
- (void).cxx_destruct;
- (id)listenForActivityPresentation:(id)a0 presenterBundleIdentifier:(id)a1 withHandler:(id /* block */)a2;

@end
