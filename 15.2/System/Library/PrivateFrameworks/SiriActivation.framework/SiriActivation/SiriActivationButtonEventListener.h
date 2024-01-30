@class NSMutableDictionary;

@interface SiriActivationButtonEventListener : SiriActivationSource

@property (retain, nonatomic) NSMutableDictionary *listeners;

+ (id)listener;

- (void)invalidatedAtTimestamp:(double)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)invalidate;
- (id)connection;
- (oneway void)buttonDownWithButtonIdentifier:(id)a0 forListenerIdentifier:(id)a1 atTimestamp:(id)a2;
- (oneway void)buttonUpWithButtonIdentifier:(id)a0 forListenerIdentifier:(id)a1 atTimestamp:(id)a2;
- (oneway void)buttonLongPressWithButtonIdentifier:(id)a0 forListenerIdentifier:(id)a1 atTimestamp:(id)a2;
- (void)configureConnectionForIdentifier:(id)a0;
- (void)_registerListenerWithIdentifier:(id)a0;
- (void)registerWithListener:(id)a0 identifier:(id)a1;
- (void)unregisterListenerWithIdentifier:(id)a0;

@end
