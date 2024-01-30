@class NSData;

@interface NTPBAsset : PBCodable <NSCopying> {
    struct { unsigned char error : 1; unsigned char size : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasWrappingKeyID;
@property (retain, nonatomic) NSData *wrappingKeyID;
@property (nonatomic) BOOL hasError;
@property (nonatomic) int error;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) unsigned int size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
