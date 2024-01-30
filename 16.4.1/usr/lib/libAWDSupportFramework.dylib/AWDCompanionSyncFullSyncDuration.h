@class NSString;

@interface AWDCompanionSyncFullSyncDuration : PBCodable <NSCopying> {
    struct { unsigned char syncDuration : 1; unsigned char timestamp : 1; unsigned char isMaster : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasIsMaster;
@property (nonatomic) BOOL isMaster;
@property (nonatomic) BOOL hasSyncDuration;
@property (nonatomic) unsigned long long syncDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
