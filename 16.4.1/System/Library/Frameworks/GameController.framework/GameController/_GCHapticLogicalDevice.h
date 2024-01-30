@class NSMutableArray, _GCHapticClientProxy;
@protocol _GCDriverClientHapticInterface, NSSecureCoding, _GCLogicalDevice, NSObject, NSCopying;

@interface _GCHapticLogicalDevice : NSObject {
    id<_GCLogicalDevice> _logicalDevice;
    id<NSCopying, NSObject, NSSecureCoding> _identifier;
    NSMutableArray *_hapticClients;
    NSMutableArray *_hapticPlayers;
    float _prevSharpness[4];
    float _prevIntensity[4];
    id<_GCDriverClientHapticInterface> _driver;
    _GCHapticClientProxy *_clientConnection;
}

- (BOOL)hasClients;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 clientConnection:(id)a1;
- (void)registerHapticClient:(id)a0;
- (void)stopAllHaptics;
- (void)unregisterHapticClient:(id)a0;

@end
