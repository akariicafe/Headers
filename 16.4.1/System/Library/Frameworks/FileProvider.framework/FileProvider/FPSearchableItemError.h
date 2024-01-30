@class NSString;

@interface FPSearchableItemError : PBCodable <NSCopying>

@property (nonatomic) int domain;
@property (nonatomic) long long code;
@property (readonly, nonatomic) BOOL hasCustomDomain;
@property (retain, nonatomic) NSString *customDomain;

+ (id)errorFromString:(id)a0;
+ (id)stringFromError:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsDomain:(id)a0;
- (id)domainAsString:(int)a0;

@end
