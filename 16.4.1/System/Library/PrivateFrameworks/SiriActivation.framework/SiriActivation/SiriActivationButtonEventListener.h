@class NSMutableDictionary;

@interface SiriActivationButtonEventListener : SiriActivationSource

@property (retain, nonatomic) NSMutableDictionary *listeners;

+ (id)listener;

- (id)connection;
- (id)_init;
- (void)invalidatedAtTimestamp:(double)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (oneway void)buttonUpWithButtonIdentifier:(id)a0 forListenerIdentifier:(id)a1 atTimestamp:(id)a2;
- (void)_registerListenerWithIdentifier:(id)a0;
- (oneway void)buttonDownWithButtonIdentifier:(id)a0 forListenerIdentifier:(id)a1 atTimestamp:(id)a2;
- (oneway void)buttonLongPressWithButtonIdentifier:(id)a0 forListenerIdentifier:(id)a1 atTimestamp:(id)a2;
- (void)configureConnectionForIdentifier:(id)a0;
- (void)registerWithListener:(id)a0 identifier:(id)a1;
- (void)unregisterListenerWithIdentifier:(id)a0;

@end
