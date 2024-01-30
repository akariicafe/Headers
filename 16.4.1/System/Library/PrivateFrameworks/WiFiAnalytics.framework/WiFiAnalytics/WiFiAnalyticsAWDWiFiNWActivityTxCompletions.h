@interface WiFiAnalyticsAWDWiFiNWActivityTxCompletions : PBCodable <NSCopying> {
    struct { unsigned char chipmodeerror : 1; unsigned char expired : 1; unsigned char internalerror : 1; unsigned char ioerror : 1; unsigned char mbfree : 1; unsigned char noack : 1; unsigned char nobuf : 1; unsigned char noremotepeer : 1; unsigned char noresources : 1; unsigned char success : 1; unsigned char txfailure : 1; } _has;
}

@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) unsigned int success;
@property (nonatomic) BOOL hasExpired;
@property (nonatomic) unsigned int expired;
@property (nonatomic) BOOL hasNobuf;
@property (nonatomic) unsigned int nobuf;
@property (nonatomic) BOOL hasNoack;
@property (nonatomic) unsigned int noack;
@property (nonatomic) BOOL hasTxfailure;
@property (nonatomic) unsigned int txfailure;
@property (nonatomic) BOOL hasNoresources;
@property (nonatomic) unsigned int noresources;
@property (nonatomic) BOOL hasIoerror;
@property (nonatomic) unsigned int ioerror;
@property (nonatomic) BOOL hasMbfree;
@property (nonatomic) unsigned int mbfree;
@property (nonatomic) BOOL hasChipmodeerror;
@property (nonatomic) unsigned int chipmodeerror;
@property (nonatomic) BOOL hasNoremotepeer;
@property (nonatomic) unsigned int noremotepeer;
@property (nonatomic) BOOL hasInternalerror;
@property (nonatomic) unsigned int internalerror;

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
