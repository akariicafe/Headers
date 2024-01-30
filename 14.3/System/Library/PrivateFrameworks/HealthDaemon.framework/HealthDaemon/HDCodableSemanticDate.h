@class NSString;

@interface HDCodableSemanticDate : PBCodable <NSCopying> {
    struct { unsigned char date : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKeyPath;
@property (retain, nonatomic) NSString *keyPath;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;

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

@end
