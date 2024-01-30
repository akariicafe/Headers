@class NSData;

@interface AWDNFCHCIEndOfTransactionEvent : PBCodable <NSCopying> {
    struct { unsigned char iad : 1; unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char transactionTotal : 1; unsigned char avgRSSIValue : 1; unsigned char command : 1; unsigned char commandStatus : 1; unsigned char currencyCode : 1; unsigned char cvm : 1; unsigned char expressType : 1; unsigned char informative : 1; unsigned char maxRSSIValue : 1; unsigned char minRSSIValue : 1; unsigned char msc : 1; unsigned char totalRSSISamples : 1; unsigned char transactionStatus : 1; unsigned char transactionType : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasCommandStatus;
@property (nonatomic) unsigned int commandStatus;
@property (nonatomic) BOOL hasCommand;
@property (nonatomic) unsigned int command;
@property (nonatomic) BOOL hasTransactionStatus;
@property (nonatomic) unsigned int transactionStatus;
@property (nonatomic) BOOL hasInformative;
@property (nonatomic) unsigned int informative;
@property (readonly, nonatomic) BOOL hasAid;
@property (retain, nonatomic) NSData *aid;
@property (nonatomic) BOOL hasTransactionTotal;
@property (nonatomic) unsigned long long transactionTotal;
@property (nonatomic) BOOL hasCurrencyCode;
@property (nonatomic) unsigned int currencyCode;
@property (nonatomic) BOOL hasIad;
@property (nonatomic) unsigned long long iad;
@property (nonatomic) BOOL hasCvm;
@property (nonatomic) unsigned int cvm;
@property (readonly, nonatomic) BOOL hasCdi;
@property (retain, nonatomic) NSData *cdi;
@property (readonly, nonatomic) BOOL hasMaidDeprecated;
@property (retain, nonatomic) NSData *maidDeprecated;
@property (nonatomic) BOOL hasMsc;
@property (nonatomic) unsigned int msc;
@property (readonly, nonatomic) BOOL hasMcii;
@property (retain, nonatomic) NSData *mcii;
@property (readonly, nonatomic) BOOL hasUuidReference;
@property (retain, nonatomic) NSData *uuidReference;
@property (nonatomic) BOOL hasTimeDeltaFromReference;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) BOOL hasTransactionType;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic) BOOL hasExpressType;
@property (nonatomic) unsigned int expressType;
@property (nonatomic) BOOL hasTotalRSSISamples;
@property (nonatomic) unsigned int totalRSSISamples;
@property (nonatomic) BOOL hasAvgRSSIValue;
@property (nonatomic) unsigned int avgRSSIValue;
@property (nonatomic) BOOL hasMaxRSSIValue;
@property (nonatomic) unsigned int maxRSSIValue;
@property (nonatomic) BOOL hasMinRSSIValue;
@property (nonatomic) unsigned int minRSSIValue;
@property (readonly, nonatomic) BOOL hasTransactionId;
@property (retain, nonatomic) NSData *transactionId;
@property (readonly, nonatomic) BOOL hasMaid;
@property (retain, nonatomic) NSData *maid;

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
