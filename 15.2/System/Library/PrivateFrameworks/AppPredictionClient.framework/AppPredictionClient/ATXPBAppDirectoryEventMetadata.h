@interface ATXPBAppDirectoryEventMetadata : PBCodable <NSCopying> {
    struct { unsigned char bundleIdInTopAppsVisible : 1; unsigned char userLaunchedAppBeforeLeaving : 1; } _has;
}

@property (nonatomic) BOOL hasBundleIdInTopAppsVisible;
@property (nonatomic) BOOL bundleIdInTopAppsVisible;
@property (nonatomic) BOOL hasUserLaunchedAppBeforeLeaving;
@property (nonatomic) BOOL userLaunchedAppBeforeLeaving;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
