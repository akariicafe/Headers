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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
