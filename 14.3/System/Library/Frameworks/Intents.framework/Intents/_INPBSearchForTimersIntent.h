@class _INPBDataString, NSString, _INPBIntentMetadata;

@interface _INPBSearchForTimersIntent : PBCodable <_INPBSearchForTimersIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char duration : 1; unsigned char state : 1; unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *label;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stateAsString:(int)a0;
- (int)StringAsState:(id)a0;
- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
