@class NSString;

@interface _INPBAirport : PBCodable <_INPBAirport, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *iataCode;
@property (readonly, nonatomic) BOOL hasIataCode;
@property (copy, nonatomic) NSString *icaoCode;
@property (readonly, nonatomic) BOOL hasIcaoCode;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
