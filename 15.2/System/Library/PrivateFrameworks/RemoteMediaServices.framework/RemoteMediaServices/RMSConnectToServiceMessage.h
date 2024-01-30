@class RMSServiceMessage, NSString;

@interface RMSConnectToServiceMessage : PBCodable <NSCopying> {
    struct { unsigned char allowPairing : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) RMSServiceMessage *service;
@property (readonly, nonatomic) BOOL hasPairingGUID;
@property (retain, nonatomic) NSString *pairingGUID;
@property (nonatomic) BOOL hasAllowPairing;
@property (nonatomic) BOOL allowPairing;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
