@class NSData;

@interface AWDNFCFelicaStateChangeEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char spID : 1; unsigned char transactionSectorCombination : 1; unsigned char transactionType : 1; unsigned char transitGreenCarTicket : 1; unsigned char transitInsideStation : 1; unsigned char blacklisted : 1; unsigned char onlineTransaction : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasOnlineTransaction;
@property (nonatomic) BOOL onlineTransaction;
@property (nonatomic) BOOL hasSpID;
@property (nonatomic) unsigned int spID;
@property (nonatomic) BOOL hasTransactionType;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic) BOOL hasTransactionSectorCombination;
@property (nonatomic) unsigned int transactionSectorCombination;
@property (readonly, nonatomic) BOOL hasTransitStartStation;
@property (retain, nonatomic) NSData *transitStartStation;
@property (readonly, nonatomic) BOOL hasTransitEndStation;
@property (retain, nonatomic) NSData *transitEndStation;
@property (nonatomic) BOOL hasTransitInsideStation;
@property (nonatomic) unsigned int transitInsideStation;
@property (nonatomic) BOOL hasTransitGreenCarTicket;
@property (nonatomic) unsigned int transitGreenCarTicket;
@property (nonatomic) BOOL hasBlacklisted;
@property (nonatomic) BOOL blacklisted;

- (void).cxx_destruct;
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
