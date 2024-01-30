@interface AWDHomeKitCameraStreamIDSConnSetupParameters : PBCodable <NSCopying> {
    struct { unsigned char connectionComplete : 1; unsigned char connectionRequested : 1; } _has;
}

@property (nonatomic) BOOL hasConnectionRequested;
@property (nonatomic) unsigned int connectionRequested;
@property (nonatomic) BOOL hasConnectionComplete;
@property (nonatomic) unsigned int connectionComplete;

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
