@class NSArray, NSString;

@interface _INPBFindDeviceAndPlaySoundIntentResponse : PBCodable <_INPBFindDeviceAndPlaySoundIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *devicesFounds;
@property (readonly, nonatomic) unsigned long long devicesFoundsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)devicesFoundType;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearDevicesFounds;
- (void)addDevicesFound:(id)a0;
- (id)devicesFoundAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
