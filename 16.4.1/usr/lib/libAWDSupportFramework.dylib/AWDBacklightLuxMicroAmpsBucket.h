@interface AWDBacklightLuxMicroAmpsBucket : PBCodable <NSCopying> {
    struct { unsigned char bucketDuration : 1; } _has;
}

@property (nonatomic) BOOL hasBucketDuration;
@property (nonatomic) unsigned int bucketDuration;

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
