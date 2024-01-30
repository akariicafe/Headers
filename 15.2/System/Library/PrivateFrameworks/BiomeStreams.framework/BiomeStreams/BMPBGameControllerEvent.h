@interface BMPBGameControllerEvent : PBCodable <NSCopying> {
    struct { unsigned char numberOfControllersConnected : 1; unsigned char isControllerConnected : 1; } _has;
}

@property (nonatomic) BOOL hasIsControllerConnected;
@property (nonatomic) BOOL isControllerConnected;
@property (nonatomic) BOOL hasNumberOfControllersConnected;
@property (nonatomic) int numberOfControllersConnected;

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
