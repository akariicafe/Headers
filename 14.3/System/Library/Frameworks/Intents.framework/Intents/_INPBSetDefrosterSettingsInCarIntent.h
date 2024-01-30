@class _INPBDataString, NSString, _INPBIntentMetadata;

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <_INPBSetDefrosterSettingsInCarIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char defroster : 1; unsigned char enable : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *carName;
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) int defroster;
@property (nonatomic) BOOL hasDefroster;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hasEnable;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)defrosterAsString:(int)a0;
- (int)StringAsDefroster:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
