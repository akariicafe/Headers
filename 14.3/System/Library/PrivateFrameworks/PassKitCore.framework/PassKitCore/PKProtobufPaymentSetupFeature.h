@interface PKProtobufPaymentSetupFeature : PBCodable <NSCopying> {
    struct { unsigned char state : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL hasState;
@property (nonatomic) unsigned long long state;

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
