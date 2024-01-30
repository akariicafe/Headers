@interface AppTelemetryQBSInvestigation : PBCodable <NSCopying> {
    struct { unsigned char clientTruthDirFaultCount : 1; unsigned char serverTruthDirCount : 1; unsigned char serverTruthDirFaultCount : 1; unsigned char serverTruthTotalItemsCount : 1; unsigned char timeSinceLogin : 1; } _has;
}

@property (nonatomic) BOOL hasServerTruthDirCount;
@property (nonatomic) unsigned long long serverTruthDirCount;
@property (nonatomic) BOOL hasServerTruthDirFaultCount;
@property (nonatomic) unsigned long long serverTruthDirFaultCount;
@property (nonatomic) BOOL hasClientTruthDirFaultCount;
@property (nonatomic) unsigned long long clientTruthDirFaultCount;
@property (nonatomic) BOOL hasTimeSinceLogin;
@property (nonatomic) unsigned long long timeSinceLogin;
@property (nonatomic) BOOL hasServerTruthTotalItemsCount;
@property (nonatomic) unsigned long long serverTruthTotalItemsCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
