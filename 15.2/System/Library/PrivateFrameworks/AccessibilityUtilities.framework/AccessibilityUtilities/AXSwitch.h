@class NSUUID, NSDictionary, NSString, AXMIDIEvent;

@interface AXSwitch : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSDictionary *expressionToSwitchTypeMapping;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) long long action;
@property (nonatomic) long long longPressAction;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *localizedSourceDescription;
@property (retain, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) BOOL hasLongPressAction;
@property (readonly, nonatomic) BOOL supportsLongPress;
@property (nonatomic) unsigned short keyCode;
@property (nonatomic) long long buttonNumber;
@property (nonatomic) long long headSwitch;
@property (retain, nonatomic) AXMIDIEvent *midiEvent;
@property (nonatomic) unsigned long long cameraSwitch;
@property (nonatomic) unsigned long long expressionSensitivity;
@property (nonatomic) long long accessibilityEventUsagePage;
@property (nonatomic) long long accessibilityEventUsage;
@property (nonatomic) long long accessibilityEventModifierFlags;
@property (copy, nonatomic) NSString *remoteSwitchIdentifier;
@property (copy, nonatomic) NSString *remoteDeviceName;
@property (copy, nonatomic) NSString *remoteDeviceIdentifier;

+ (id)switchWithAction:(long long)a0 name:(id)a1 source:(id)a2 type:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(long long)a0 name:(id)a1 source:(id)a2 type:(id)a3;
- (unsigned long long)hash;

@end
