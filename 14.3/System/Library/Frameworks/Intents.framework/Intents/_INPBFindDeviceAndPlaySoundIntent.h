@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBFindDeviceAndPlaySoundIntent : PBCodable <_INPBFindDeviceAndPlaySoundIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char isStopRequest : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *devices;
@property (readonly, nonatomic) unsigned long long devicesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL isStopRequest;
@property (nonatomic) BOOL hasIsStopRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)deviceType;

- (void)clearDevices;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (void)addDevice:(id)a0;
- (id)deviceAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
