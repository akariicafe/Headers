@class NSString;

@interface _INPBHomeAttributeRange : PBCodable <_INPBHomeAttributeRange, NSSecureCoding, NSCopying> {
    struct { unsigned char lowerValue : 1; unsigned char upperValue : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double lowerValue;
@property (nonatomic) BOOL hasLowerValue;
@property (nonatomic) double upperValue;
@property (nonatomic) BOOL hasUpperValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
