@class NSData;

@interface AWDNFCFelicaStateChangeEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _spID;
    unsigned int _transactionSectorCombination;
    unsigned int _transactionType;
    NSData *_transitEndStation;
    unsigned int _transitGreenCarTicket;
    unsigned int _transitInsideStation;
    NSData *_transitStartStation;
    BOOL _blacklisted;
    BOOL _onlineTransaction;
    struct { unsigned char timestamp : 1; unsigned char spID : 1; unsigned char transactionSectorCombination : 1; unsigned char transactionType : 1; unsigned char transitGreenCarTicket : 1; unsigned char transitInsideStation : 1; unsigned char blacklisted : 1; unsigned char onlineTransaction : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
