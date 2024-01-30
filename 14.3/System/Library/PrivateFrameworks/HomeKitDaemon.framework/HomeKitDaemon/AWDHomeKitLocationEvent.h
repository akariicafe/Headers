@interface AWDHomeKitLocationEvent : PBCodable <NSCopying> {
    struct { unsigned char notifyOnEntry : 1; unsigned char notifyOnExit : 1; } _has;
}

@property (nonatomic) BOOL hasNotifyOnEntry;
@property (nonatomic) BOOL notifyOnEntry;
@property (nonatomic) BOOL hasNotifyOnExit;
@property (nonatomic) BOOL notifyOnExit;

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
