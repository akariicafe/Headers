@class NSString, _INPBDataString, _INPBTimer, _INPBIntentMetadata;

@interface _INPBSetTimerAttributeIntent : PBCodable <_INPBSetTimerAttributeIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char toDuration : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBTimer *targetTimer;
@property (readonly, nonatomic) BOOL hasTargetTimer;
@property (nonatomic) double toDuration;
@property (nonatomic) BOOL hasToDuration;
@property (retain, nonatomic) _INPBDataString *toLabel;
@property (readonly, nonatomic) BOOL hasToLabel;
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

@end
