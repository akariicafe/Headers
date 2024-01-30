@interface PBBProtoPopToControllerType : PBCodable <NSCopying> {
    struct { unsigned char intendedFireDate : 1; } _has;
}

@property (nonatomic) unsigned int controllerType;
@property (nonatomic) BOOL hasIntendedFireDate;
@property (nonatomic) double intendedFireDate;

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
