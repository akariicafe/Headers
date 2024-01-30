@interface NPKProtoStandalonePaymentSetupProductPaymentOption : PBCodable <NSCopying> {
    struct { unsigned char cardType : 1; unsigned char priority : 1; unsigned char supportedProtocols : 1; } _has;
}

@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL hasCardType;
@property (nonatomic) long long cardType;
@property (nonatomic) BOOL hasSupportedProtocols;
@property (nonatomic) long long supportedProtocols;

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
