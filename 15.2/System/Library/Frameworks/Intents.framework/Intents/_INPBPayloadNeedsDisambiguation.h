@class NSArray, NSString;

@interface _INPBPayloadNeedsDisambiguation : PBCodable <_INPBPayloadNeedsDisambiguation, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *disambiguationItems;
@property (readonly, nonatomic) unsigned long long disambiguationItemsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)disambiguationItemsType;

- (void)encodeWithCoder:(id)a0;
- (void)clearDisambiguationItems;
- (void)addDisambiguationItems:(id)a0;
- (id)disambiguationItemsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
