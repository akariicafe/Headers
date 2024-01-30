@interface WiFiAnalyticsAWDWiFiNWActivityBtCoexReqestReason : PBCodable <NSCopying> {
    struct { unsigned char a2dp : 1; unsigned char acl : 1; unsigned char ble : 1; unsigned char blescan : 1; unsigned char esco : 1; unsigned char inquiry : 1; unsigned char inquiryscan : 1; unsigned char mss : 1; unsigned char other : 1; unsigned char page : 1; unsigned char pagescan : 1; unsigned char park : 1; unsigned char sco : 1; unsigned char sniff : 1; } _has;
}

@property (nonatomic) BOOL hasAcl;
@property (nonatomic) unsigned int acl;
@property (nonatomic) BOOL hasSco;
@property (nonatomic) unsigned int sco;
@property (nonatomic) BOOL hasEsco;
@property (nonatomic) unsigned int esco;
@property (nonatomic) BOOL hasA2dp;
@property (nonatomic) unsigned int a2dp;
@property (nonatomic) BOOL hasSniff;
@property (nonatomic) unsigned int sniff;
@property (nonatomic) BOOL hasPagescan;
@property (nonatomic) unsigned int pagescan;
@property (nonatomic) BOOL hasInquiryscan;
@property (nonatomic) unsigned int inquiryscan;
@property (nonatomic) BOOL hasPage;
@property (nonatomic) unsigned int page;
@property (nonatomic) BOOL hasInquiry;
@property (nonatomic) unsigned int inquiry;
@property (nonatomic) BOOL hasMss;
@property (nonatomic) unsigned int mss;
@property (nonatomic) BOOL hasPark;
@property (nonatomic) unsigned int park;
@property (nonatomic) BOOL hasBle;
@property (nonatomic) unsigned int ble;
@property (nonatomic) BOOL hasBlescan;
@property (nonatomic) unsigned int blescan;
@property (nonatomic) BOOL hasOther;
@property (nonatomic) unsigned int other;

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
