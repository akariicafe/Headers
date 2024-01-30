@class NSMutableArray;

@interface ADOdmlResponseV2 : PBCodable <NSCopying> {
    struct { unsigned char odmlEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasOdmlEnabled;
@property (nonatomic) BOOL odmlEnabled;
@property (retain, nonatomic) NSMutableArray *features;

+ (Class)featuresType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)featuresCount;
- (void)clearFeatures;
- (id)featuresAtIndex:(unsigned long long)a0;
- (void)addFeatures:(id)a0;

@end
