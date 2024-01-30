@interface NWAWDNWPrivacyProxyTraffic : PBCodable <NSCopying> {
    struct { unsigned char anyAppTrackers : 1; unsigned char anyDNS : 1; unsigned char anyKnownTrackers : 1; unsigned char anyUnencrypted : 1; unsigned char mailTrackers : 1; unsigned char newsURLResolution : 1; unsigned char safariAll : 1; unsigned char safariDNS : 1; unsigned char safariHTTP : 1; unsigned char safariTrackers : 1; unsigned char safariUnencrypted : 1; } _has;
}

@property (nonatomic) BOOL hasSafariUnencrypted;
@property (nonatomic) BOOL safariUnencrypted;
@property (nonatomic) BOOL hasSafariDNS;
@property (nonatomic) BOOL safariDNS;
@property (nonatomic) BOOL hasSafariTrackers;
@property (nonatomic) BOOL safariTrackers;
@property (nonatomic) BOOL hasSafariAll;
@property (nonatomic) BOOL safariAll;
@property (nonatomic) BOOL hasSafariHTTP;
@property (nonatomic) BOOL safariHTTP;
@property (nonatomic) BOOL hasMailTrackers;
@property (nonatomic) BOOL mailTrackers;
@property (nonatomic) BOOL hasAnyUnencrypted;
@property (nonatomic) BOOL anyUnencrypted;
@property (nonatomic) BOOL hasAnyDNS;
@property (nonatomic) BOOL anyDNS;
@property (nonatomic) BOOL hasAnyKnownTrackers;
@property (nonatomic) BOOL anyKnownTrackers;
@property (nonatomic) BOOL hasAnyAppTrackers;
@property (nonatomic) BOOL anyAppTrackers;
@property (nonatomic) BOOL hasNewsURLResolution;
@property (nonatomic) BOOL newsURLResolution;

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
