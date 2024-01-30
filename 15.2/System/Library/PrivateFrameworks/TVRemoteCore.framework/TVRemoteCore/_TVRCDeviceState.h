@class NSString, NSDictionary, NSSet, NSError, _TVRCKeyboardState;

@interface _TVRCDeviceState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long connectionState;
@property (nonatomic) unsigned long long pairingCapability;
@property (nonatomic) long long connectionType;
@property (nonatomic) BOOL supportsTouchEvents;
@property (nonatomic, getter=isPaired) BOOL paired;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSSet *supportedButtons;
@property (copy, nonatomic) _TVRCKeyboardState *keyboardState;
@property (copy, nonatomic) NSString *sourceVersion;
@property (nonatomic) long long disconnectReason;
@property (copy, nonatomic) NSError *disconnectError;

+ (id)deviceStateFromDevice:(id)a0;
+ (id)setOfStatesFromDevices:(id)a0;

- (id)initWithDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
