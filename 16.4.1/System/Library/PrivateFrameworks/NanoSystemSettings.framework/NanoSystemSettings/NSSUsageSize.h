@interface NSSUsageSize : PBCodable <NSCopying> {
    struct { unsigned char docsAndData : 1; unsigned char fixed : 1; unsigned char purgeable : 1; } _has;
}

@property (nonatomic) BOOL hasFixed;
@property (nonatomic) unsigned long long fixed;
@property (nonatomic) BOOL hasDocsAndData;
@property (nonatomic) unsigned long long docsAndData;
@property (nonatomic) BOOL hasPurgeable;
@property (nonatomic) unsigned long long purgeable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
