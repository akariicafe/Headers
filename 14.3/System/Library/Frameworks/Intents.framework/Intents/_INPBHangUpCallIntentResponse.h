@class NSString;

@interface _INPBHangUpCallIntentResponse : PBCodable <_INPBHangUpCallIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char hungUpCallType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int hungUpCallType;
@property (nonatomic) BOOL hasHungUpCallType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)hungUpCallTypeAsString:(int)a0;
- (int)StringAsHungUpCallType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
