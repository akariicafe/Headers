@class NSString;

@interface PAPBApplication : PBCodable <NSCopying> {
    struct { unsigned char identifierType : 1; } _has;
}

@property (nonatomic) BOOL hasIdentifierType;
@property (nonatomic) int identifierType;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
