@class NSData;

@interface KCellularWcdmaIdleToConnectedUserData : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char subsId : 1; unsigned char isUplink : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasIsUplink;
@property (nonatomic) BOOL isUplink;
@property (readonly, nonatomic) BOOL hasUserData;
@property (retain, nonatomic) NSData *userData;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

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
