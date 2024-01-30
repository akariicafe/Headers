@class NSString;

@interface _INPBColor : PBCodable <_INPBColor, NSSecureCoding, NSCopying> {
    struct { unsigned char blue : 1; unsigned char green : 1; unsigned char red : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double blue;
@property (nonatomic) BOOL hasBlue;
@property (nonatomic) double green;
@property (nonatomic) BOOL hasGreen;
@property (nonatomic) double red;
@property (nonatomic) BOOL hasRed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
