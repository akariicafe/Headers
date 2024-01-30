@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (readonly, copy, nonatomic) NSDictionary *route;

- (id)customDescription;
- (long long)deviceType;
- (BOOL)isWiredHeadset;
- (BOOL)isPreferred;
- (BOOL)isReceiver;
- (BOOL)isSpeaker;
- (void).cxx_destruct;
- (long long)bluetoothEndpointType;
- (id)identifiersOfOtherConnectedDevices;
- (BOOL)isAirTunes;
- (BOOL)isBluetooth;
- (BOOL)isDefaultRoute;
- (BOOL)isWirelessHeadset;
- (BOOL)isCurrentlyPicked;
- (BOOL)isBluetoothLE;
- (BOOL)isCarAudio;
- (BOOL)supportsPreferredAndActive;
- (BOOL)isPreferredAndActive;
- (BOOL)isWiredHeadphones;
- (BOOL)_routeTypeEqualTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isHandset;

@end
