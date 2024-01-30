@class NSString;

@interface NNMKProtoAccountSourceType : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char sourceType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic) BOOL hasSourceType;
@property (nonatomic) unsigned int sourceType;

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
