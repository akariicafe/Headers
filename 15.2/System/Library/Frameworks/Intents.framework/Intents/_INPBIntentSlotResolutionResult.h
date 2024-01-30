@class _INPBPayloadSuccess, _INPBPayloadNeedsExecuteIntent, _INPBPayloadUnsupported, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsValue, NSString, _INPBPayloadConfirmation;

@interface _INPBIntentSlotResolutionResult : PBCodable <_INPBIntentSlotResolutionResult, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBPayloadConfirmation *payloadConfirmation;
@property (readonly, nonatomic) BOOL hasPayloadConfirmation;
@property (retain, nonatomic) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation;
@property (readonly, nonatomic) BOOL hasPayloadNeedsDisambiguation;
@property (retain, nonatomic) _INPBPayloadNeedsExecuteIntent *payloadNeedsExecuteIntent;
@property (readonly, nonatomic) BOOL hasPayloadNeedsExecuteIntent;
@property (retain, nonatomic) _INPBPayloadNeedsValue *payloadNeedsValue;
@property (readonly, nonatomic) BOOL hasPayloadNeedsValue;
@property (retain, nonatomic) _INPBPayloadSuccess *payloadSuccess;
@property (readonly, nonatomic) BOOL hasPayloadSuccess;
@property (retain, nonatomic) _INPBPayloadUnsupported *payloadUnsupported;
@property (readonly, nonatomic) BOOL hasPayloadUnsupported;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
