@class NSString, NSUUID;

@interface AFBluetoothDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, copy, nonatomic) NSUUID *deviceUID;
@property (readonly, nonatomic) unsigned int vendorID;
@property (readonly, nonatomic) unsigned int productID;
@property (readonly, nonatomic) BOOL isAdvancedAppleAudioDevice;
@property (readonly, nonatomic) BOOL supportsInEarDetection;
@property (readonly, nonatomic) BOOL supportsVoiceTrigger;
@property (readonly, nonatomic) BOOL supportsSpokenNotification;
@property (readonly, nonatomic) BOOL supportsListeningModeANC;
@property (readonly, nonatomic) BOOL supportsListeningModeTransparency;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithAddress:(id)a0 deviceUID:(id)a1 vendorID:(unsigned int)a2 productID:(unsigned int)a3 isAdvancedAppleAudioDevice:(BOOL)a4 supportsInEarDetection:(BOOL)a5 supportsVoiceTrigger:(BOOL)a6 supportsSpokenNotification:(BOOL)a7 supportsListeningModeANC:(BOOL)a8 supportsListeningModeTransparency:(BOOL)a9;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
