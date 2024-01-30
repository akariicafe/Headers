@interface WBSAnalyticsSafariCKBookmarksMigrationStartedEvent : PBCodable <NSCopying> {
    struct { unsigned char localState : 1; unsigned char remoteState : 1; unsigned char timestamp : 1; unsigned char migratorType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasMigratorType;
@property (nonatomic) int migratorType;
@property (nonatomic) BOOL hasLocalState;
@property (nonatomic) long long localState;
@property (nonatomic) BOOL hasRemoteState;
@property (nonatomic) long long remoteState;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)migratorTypeAsString:(int)a0;
- (int)StringAsMigratorType:(id)a0;

@end
