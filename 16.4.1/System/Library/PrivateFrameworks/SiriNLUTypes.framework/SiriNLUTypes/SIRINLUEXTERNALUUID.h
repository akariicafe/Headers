@interface SIRINLUEXTERNALUUID : PBCodable <NSCopying> {
    struct { unsigned char highInt : 1; unsigned char lowInt : 1; unsigned char namespaceA : 1; } _has;
}

@property (nonatomic) BOOL hasHighInt;
@property (nonatomic) unsigned long long highInt;
@property (nonatomic) BOOL hasLowInt;
@property (nonatomic) unsigned long long lowInt;
@property (nonatomic) BOOL hasNamespaceA;
@property (nonatomic) int namespaceA;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsNamespaceA:(id)a0;
- (id)namespaceAAsString:(int)a0;

@end
