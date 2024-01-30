@class NSData;

@interface MIDICIDeviceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *manufacturerID;
@property (readonly, nonatomic) NSData *family;
@property (readonly, nonatomic) NSData *modelNumber;
@property (readonly, nonatomic) NSData *revisionLevel;
@property (readonly, nonatomic) unsigned int midiDestination;

+ (id)description;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDestination:(unsigned int)a0 manufacturer:(id)a1 family:(id)a2 model:(id)a3 revision:(id)a4;
- (id)initWithDestination:(unsigned int)a0 deviceID:(struct MIDICIDeviceIdentification { unsigned char x0[3]; unsigned char x1[2]; unsigned char x2[2]; unsigned char x3[4]; unsigned char x4[5]; } *)a1;
- (struct MIDICIDeviceIdentification { unsigned char x0[3]; unsigned char x1[2]; unsigned char x2[2]; unsigned char x3[4]; unsigned char x4[5]; })asDeviceIDStruct;

@end
