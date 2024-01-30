@interface HDAWDHealthKitNotificationResponseFlags : PBCodable <NSCopying> {
    struct { unsigned char alreadyDoing : 1; unsigned char poorTiming : 1; } _has;
}

@property (nonatomic) BOOL hasPoorTiming;
@property (nonatomic) BOOL poorTiming;
@property (nonatomic) BOOL hasAlreadyDoing;
@property (nonatomic) BOOL alreadyDoing;

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
