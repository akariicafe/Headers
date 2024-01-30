@class NSData, NSString;

@interface AWDWifiAssociation : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char band : 1; unsigned char channel : 1; unsigned char deauthReason : 1; unsigned char error : 1; unsigned char noise : 1; unsigned char phymode : 1; unsigned char signal : 1; unsigned char txrate : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasError;
@property (nonatomic) unsigned int error;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) int channel;
@property (nonatomic) BOOL hasSignal;
@property (nonatomic) int signal;
@property (readonly, nonatomic) BOOL hasBssidOui;
@property (retain, nonatomic) NSData *bssidOui;
@property (readonly, nonatomic) BOOL hasSecurity;
@property (retain, nonatomic) NSString *security;
@property (nonatomic) BOOL hasDeauthReason;
@property (nonatomic) int deauthReason;
@property (readonly, nonatomic) BOOL hasDeauthSourceOui;
@property (retain, nonatomic) NSData *deauthSourceOui;
@property (nonatomic) BOOL hasNoise;
@property (nonatomic) int noise;
@property (nonatomic) BOOL hasTxrate;
@property (nonatomic) int txrate;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasPhymode;
@property (nonatomic) unsigned int phymode;
@property (nonatomic) BOOL hasBand;
@property (nonatomic) int band;
@property (readonly, nonatomic) BOOL hasPrivateMacType;
@property (retain, nonatomic) NSString *privateMacType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
