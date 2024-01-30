@class NSData, NSString;

@interface AWDNFCHCEVASGetData : PBCodable <NSCopying> {
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char filterType : 1; unsigned char filterValue : 1; unsigned char signupOnly : 1; unsigned char swStatus : 1; unsigned char terminalCapabilities : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasSignupOnly;
@property (nonatomic) unsigned int signupOnly;
@property (nonatomic) BOOL hasTerminalCapabilities;
@property (nonatomic) unsigned int terminalCapabilities;
@property (readonly, nonatomic) BOOL hasMerchantID;
@property (retain, nonatomic) NSData *merchantID;
@property (readonly, nonatomic) BOOL hasMerchantURL;
@property (retain, nonatomic) NSString *merchantURL;
@property (nonatomic) BOOL hasFilterType;
@property (nonatomic) unsigned int filterType;
@property (nonatomic) BOOL hasFilterValue;
@property (nonatomic) unsigned int filterValue;
@property (nonatomic) BOOL hasSwStatus;
@property (nonatomic) unsigned int swStatus;
@property (readonly, nonatomic) BOOL hasUuidReference;
@property (retain, nonatomic) NSData *uuidReference;
@property (nonatomic) BOOL hasTimeDeltaFromReference;
@property (nonatomic) unsigned long long timeDeltaFromReference;

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
