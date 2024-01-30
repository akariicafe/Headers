@class SYMessageHeader, NSString;

@interface SYBatchSyncStart : PBCodable <NSCopying> {
    struct { unsigned char estimatedChangeCount : 1; } _has;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) BOOL hasEstimatedChangeCount;
@property (nonatomic) unsigned int estimatedChangeCount;

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
