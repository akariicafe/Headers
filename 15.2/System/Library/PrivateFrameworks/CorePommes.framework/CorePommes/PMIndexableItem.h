@class NSString, NSMutableArray, PMCard;

@interface PMIndexableItem : PBCodable <NSCopying> {
    struct { unsigned char expirationDate : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *attributes;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasDomainIdentifier;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) long long expirationDate;
@property (readonly, nonatomic) BOOL hasCard;
@property (retain, nonatomic) PMCard *card;

+ (Class)attributesType;

- (BOOL)readFrom:(id)a0;
- (void)clearAttributes;
- (id)description;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeForKey:(int)a0;
- (id)init;
- (unsigned long long)attributesCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)boolValueForKey:(int)a0;
- (id)dictionaryRepresentation;
- (id)stringValueForKey:(int)a0;
- (double)doubleValueForKey:(int)a0;
- (float)floatValueForKey:(int)a0;
- (void)addAttributeWithKey:(int)a0 stringValues:(id)a1;
- (void)addAttributeWithKey:(int)a0 stringValue:(id)a1;
- (void)addAttributeWithKey:(int)a0 personValues:(id)a1;
- (void)addAttributeWithKey:(int)a0 bytesValue:(id)a1;
- (void)addAttributeWithKey:(int)a0 doubleValue:(double)a1;
- (void)addAttributeWithKey:(int)a0 boolValue:(BOOL)a1;
- (void)addAttributeWithKey:(int)a0 intValue:(long long)a1;
- (void)addAttributeWithKey:(int)a0 floatValue:(float)a1;
- (void)addAttributeWithKey:(int)a0 personValue:(id)a1;
- (void)addPersonsWithKey:(int)a0 emails:(id)a1;
- (id)attributesForKey:(int)a0;
- (id)bytesValueForKey:(int)a0;
- (long long)intValueForKey:(int)a0;
- (id)personValueForKey:(int)a0;
- (id)personValuesForKey:(int)a0;
- (id)stringValuesForKey:(int)a0;

@end
