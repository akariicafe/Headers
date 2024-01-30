@class NSArray;

@interface TUMutableRoute : TURoute

@property (nonatomic, getter=isCurrentlyPicked) BOOL currentlyPicked;
@property (nonatomic, getter=isDefaultRoute) BOOL defaultRoute;
@property (nonatomic) long long deviceType;
@property (nonatomic, getter=isReceiver) BOOL receiver;
@property (nonatomic, getter=isSpeaker) BOOL speaker;
@property (nonatomic, getter=isWiredHeadphones) BOOL wiredHeadphones;
@property (nonatomic, getter=isWiredHeadset) BOOL wiredHeadset;
@property (nonatomic, getter=isWirelessHeadset) BOOL wirelessHeadset;
@property (nonatomic, getter=isAirTunes) BOOL airTunes;
@property (nonatomic, getter=isCarAudio) BOOL carAudio;
@property (nonatomic, getter=isGuest) BOOL guest;
@property (nonatomic, getter=isBluetooth) BOOL bluetooth;
@property (nonatomic, getter=isBluetoothLE) BOOL bluetoothLE;
@property (nonatomic, getter=isBluetoothManaged) BOOL bluetoothManaged;
@property (nonatomic) long long bluetoothEndpointType;
@property (nonatomic, getter=isInEarDetectionEnabled) BOOL inEarDetectionEnabled;
@property (nonatomic, getter=isInEarDetectionSupported) BOOL inEarDetectionSupported;
@property (nonatomic, getter=isPreferred) BOOL preferred;
@property (nonatomic, getter=isPreferredAndActive) BOOL preferredAndActive;
@property (copy, nonatomic) NSArray *identifiersOfOtherConnectedDevices;
@property (nonatomic) BOOL supportsRelay;


@end
