@class NSString;

@interface _INPBCallMetricsValue : PBCodable <_INPBCallMetricsValue, NSSecureCoding, NSCopying> {
    struct { unsigned char callDuration : 1; unsigned char timeToEstablish : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double callDuration;
@property (nonatomic) BOOL hasCallDuration;
@property (nonatomic) double timeToEstablish;
@property (nonatomic) BOOL hasTimeToEstablish;
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

@end
