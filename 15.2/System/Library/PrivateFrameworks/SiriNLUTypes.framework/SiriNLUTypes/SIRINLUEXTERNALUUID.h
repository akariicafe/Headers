@interface SIRINLUEXTERNALUUID : PBCodable <NSCopying> {
    struct { unsigned char highInt : 1; unsigned char lowInt : 1; unsigned char namespaceA : 1; } _has;
}

@property (nonatomic) BOOL hasHighInt;
@property (nonatomic) unsigned long long highInt;
@property (nonatomic) BOOL hasLowInt;
@property (nonatomic) unsigned long long lowInt;
@property (nonatomic) BOOL hasNamespaceA;
@property (nonatomic) int namespaceA;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)namespaceAAsString:(int)a0;
- (int)StringAsNamespaceA:(id)a0;

@end
