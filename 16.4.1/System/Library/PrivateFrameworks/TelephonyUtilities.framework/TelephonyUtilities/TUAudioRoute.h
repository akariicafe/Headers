@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (BOOL)supportsSecureCoding;

- (BOOL)isPreferred;
- (BOOL)isAirTunes;
- (BOOL)isBluetooth;
- (BOOL)isSpeaker;
- (BOOL)isCurrentlyPicked;
- (BOOL)isReceiver;
- (BOOL)isDefaultRoute;
- (BOOL)isBluetoothLE;
- (BOOL)isA2DPRoute;
- (BOOL)isInEarDetectionSupported;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isPartnerRouteRoutable;
- (id)identifiersOfOtherConnectedDevices;
- (id)initWithCoder:(id)a0;
- (BOOL)_routeTypeEqualTo:(id)a0;
- (id)customDescription;
- (BOOL)isWiredHeadset;
- (BOOL)isCarAudio;
- (BOOL)isSiblingRoutePresent;
- (BOOL)isHandset;
- (BOOL)isPreferredAndActive;
- (id)initWithDictionary:(id)a0;
- (long long)deviceType;
- (BOOL)isBluetoothManaged;
- (BOOL)supportsSharePlay;
- (BOOL)isInEarDetectionEnabled;
- (BOOL)isWiredHeadphones;
- (BOOL)isWirelessHeadset;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (void).cxx_destruct;
- (long long)bluetoothEndpointType;

@end
