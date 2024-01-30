@class NSString;

@interface AWDCoreRoutineSettingsClusterView : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char clusterCount : 1; unsigned char elsewhereCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL hasClusterCount;
@property (nonatomic) int clusterCount;
@property (nonatomic) BOOL hasElsewhereCount;
@property (nonatomic) int elsewhereCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
