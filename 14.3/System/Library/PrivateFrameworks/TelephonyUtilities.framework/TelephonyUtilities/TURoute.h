@class NSArray, NSString;

@interface TURoute : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deviceType;
@property (nonatomic, getter=isCurrentlyPicked) BOOL currentlyPicked;
@property (nonatomic, getter=isDefaultRoute) BOOL defaultRoute;
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
@property (nonatomic) long long bluetoothEndpointType;
@property (nonatomic, getter=isPreferred) BOOL preferred;
@property (nonatomic, getter=isPreferredAndActive) BOOL preferredAndActive;
@property (nonatomic) BOOL supportsPreferredAndActive;
@property (copy, nonatomic) NSArray *identifiersOfOtherConnectedDevices;
@property (nonatomic) BOOL supportsRelay;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *name;

- (id)customDescription;
- (BOOL)isEqualToRoute:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUniqueIdentifier:(id)a0 name:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
