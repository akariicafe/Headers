@class NSData;

@interface AWDNFCHCIEndOfTransactionEvent : PBCodable <NSCopying> {
    unsigned long long _iad;
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned long long _transactionTotal;
    NSData *_aid;
    unsigned int _avgRSSIValue;
    NSData *_cdi;
    unsigned int _command;
    unsigned int _commandStatus;
    unsigned int _currencyCode;
    unsigned int _cvm;
    unsigned int _expressType;
    unsigned int _informative;
    NSData *_maid;
    NSData *_maidDeprecated;
    unsigned int _maxRSSIValue;
    NSData *_mcii;
    unsigned int _minRSSIValue;
    unsigned int _msc;
    unsigned int _totalRSSISamples;
    NSData *_transactionId;
    unsigned int _transactionStatus;
    unsigned int _transactionType;
    NSData *_uuidReference;
    unsigned int _version;
    struct { unsigned char iad : 1; unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char transactionTotal : 1; unsigned char avgRSSIValue : 1; unsigned char command : 1; unsigned char commandStatus : 1; unsigned char currencyCode : 1; unsigned char cvm : 1; unsigned char expressType : 1; unsigned char informative : 1; unsigned char maxRSSIValue : 1; unsigned char minRSSIValue : 1; unsigned char msc : 1; unsigned char totalRSSISamples : 1; unsigned char transactionStatus : 1; unsigned char transactionType : 1; unsigned char version : 1; } _has;
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
