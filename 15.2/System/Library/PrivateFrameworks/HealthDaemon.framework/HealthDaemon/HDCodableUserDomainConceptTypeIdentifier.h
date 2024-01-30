@class NSString;

@interface HDCodableUserDomainConceptTypeIdentifier : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSchema;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) long long code;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
