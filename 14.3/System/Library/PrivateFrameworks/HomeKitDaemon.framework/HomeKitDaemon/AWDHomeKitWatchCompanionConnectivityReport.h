@interface AWDHomeKitWatchCompanionConnectivityReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char numWatchAddEvents : 1; unsigned char numWatchRemoveEvents : 1; unsigned char reportComplete : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNumWatchAddEvents;
@property (nonatomic) unsigned int numWatchAddEvents;
@property (nonatomic) BOOL hasNumWatchRemoveEvents;
@property (nonatomic) unsigned int numWatchRemoveEvents;
@property (nonatomic) BOOL hasReportComplete;
@property (nonatomic) BOOL reportComplete;

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
