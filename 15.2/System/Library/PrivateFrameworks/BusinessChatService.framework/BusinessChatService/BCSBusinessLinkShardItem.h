@class NSData;

@interface BCSBusinessLinkShardItem : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char index : 1; unsigned char ttl : 1; } _has;
}

@property (nonatomic) BOOL hasIndex;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasTtl;
@property (nonatomic) long long ttl;
@property (readonly, nonatomic) BOOL hasFilter;
@property (retain, nonatomic) NSData *filter;

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
