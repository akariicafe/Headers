@class NSData;

@interface AWDNFCHCIEndOfTransactionV2Event : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned int _accessUniversityCode;
    NSData *_aid;
    unsigned int _avgRSSIValue;
    unsigned int _command;
    unsigned int _commandParam1;
    unsigned int _commandResult;
    unsigned int _currencyCode;
    unsigned int _endEventInterface;
    unsigned int _expressType;
    unsigned int _informative;
    unsigned int _issuerCityCode;
    unsigned int _localValidation;
    unsigned int _maxRSSIValue;
    unsigned int _minRSSIValue;
    unsigned int _multiTagState;
    unsigned int _sfiRead;
    unsigned int _sfiUpdated;
    unsigned int _spid;
    NSData *_stationID;
    NSData *_terminalIdentifier;
    unsigned int _terminalType;
    unsigned int _totalRSSISamples;
    unsigned int _transactionCategory;
    unsigned int _transactionExtension;
    NSData *_transactionId;
    unsigned int _transactionInProgress;
    unsigned int _transactionStatus;
    unsigned int _transactionType;
    NSData *_uuidReference;
    unsigned int _version;
    BOOL _hasExpiryDate;
    BOOL _isBlacklisted;
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char accessUniversityCode : 1; unsigned char avgRSSIValue : 1; unsigned char command : 1; unsigned char commandParam1 : 1; unsigned char commandResult : 1; unsigned char currencyCode : 1; unsigned char endEventInterface : 1; unsigned char expressType : 1; unsigned char informative : 1; unsigned char issuerCityCode : 1; unsigned char localValidation : 1; unsigned char maxRSSIValue : 1; unsigned char minRSSIValue : 1; unsigned char multiTagState : 1; unsigned char sfiRead : 1; unsigned char sfiUpdated : 1; unsigned char spid : 1; unsigned char terminalType : 1; unsigned char totalRSSISamples : 1; unsigned char transactionCategory : 1; unsigned char transactionExtension : 1; unsigned char transactionInProgress : 1; unsigned char transactionStatus : 1; unsigned char transactionType : 1; unsigned char version : 1; unsigned char hasExpiryDate : 1; unsigned char isBlacklisted : 1; } _has;
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
