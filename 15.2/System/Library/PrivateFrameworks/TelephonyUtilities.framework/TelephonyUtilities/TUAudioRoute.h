@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (BOOL)supportsSecureCoding;

- (BOOL)isInEarDetectionEnabled;
- (BOOL)isBluetooth;
- (BOOL)isBluetoothManaged;
- (BOOL)isWiredHeadphones;
- (long long)deviceType;
- (BOOL)isSpeaker;
- (BOOL)isPreferred;
- (void)encodeWithCoder:(id)a0;
- (id)identifiersOfOtherConnectedDevices;
- (BOOL)isAirTunes;
- (BOOL)isPartnerRoutePresent;
- (BOOL)isCarAudio;
- (BOOL)supportsSharePlay;
- (BOOL)isInEarDetectionSupported;
- (BOOL)isWiredHeadset;
- (BOOL)isWirelessHeadset;
- (BOOL)isDefaultRoute;
- (void).cxx_destruct;
- (BOOL)isCurrentlyPicked;
- (BOOL)isSiblingRoutePresent;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)customDescription;
- (BOOL)isBluetoothLE;
- (BOOL)isReceiver;
- (BOOL)isHandset;
- (BOOL)isPreferredAndActive;
- (BOOL)isA2DPRoute;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (BOOL)_routeTypeEqualTo:(id)a0;
- (long long)bluetoothEndpointType;

@end
