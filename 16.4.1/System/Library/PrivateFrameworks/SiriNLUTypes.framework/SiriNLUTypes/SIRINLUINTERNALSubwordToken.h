@class NSString;

@interface SIRINLUINTERNALSubwordToken : PBCodable <NSCopying> {
    struct { unsigned char subwordTokenIndex : 1; unsigned char tokenIndex : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) BOOL hasSubwordTokenIndex;
@property (nonatomic) int subwordTokenIndex;
@property (nonatomic) BOOL hasTokenIndex;
@property (nonatomic) int tokenIndex;

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

@end
