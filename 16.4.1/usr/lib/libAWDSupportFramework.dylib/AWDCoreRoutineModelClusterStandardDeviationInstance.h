@interface AWDCoreRoutineModelClusterStandardDeviationInstance : PBCodable <NSCopying> {
    struct { unsigned char entryStandardDeviation : 1; unsigned char exitStandardDeviation : 1; } _has;
}

@property (nonatomic) BOOL hasEntryStandardDeviation;
@property (nonatomic) int entryStandardDeviation;
@property (nonatomic) BOOL hasExitStandardDeviation;
@property (nonatomic) int exitStandardDeviation;

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
