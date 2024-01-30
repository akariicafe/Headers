@class NSString, _INPBInteger, _INPBDouble, _INPBIntentMetadata, _INPBString;

@interface _INPBSetRadioStationIntent : PBCodable <_INPBSetRadioStationIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char radioType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *channel;
@property (readonly, nonatomic) BOOL hasChannel;
@property (retain, nonatomic) _INPBDouble *frequency;
@property (readonly, nonatomic) BOOL hasFrequency;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBInteger *presetNumber;
@property (readonly, nonatomic) BOOL hasPresetNumber;
@property (nonatomic) int radioType;
@property (nonatomic) BOOL hasRadioType;
@property (retain, nonatomic) _INPBString *stationName;
@property (readonly, nonatomic) BOOL hasStationName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (int)StringAsRadioType:(id)a0;
- (id)radioTypeAsString:(int)a0;

@end
