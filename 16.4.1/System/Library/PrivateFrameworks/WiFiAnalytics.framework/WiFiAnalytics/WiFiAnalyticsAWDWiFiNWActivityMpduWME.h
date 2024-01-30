@interface WiFiAnalyticsAWDWiFiNWActivityMpduWME : PBCodable <NSCopying> {
    struct { unsigned char tid0 : 1; unsigned char tid1 : 1; unsigned char tid2 : 1; unsigned char tid3 : 1; unsigned char tid4 : 1; unsigned char tid5 : 1; unsigned char tid6 : 1; unsigned char tid7 : 1; } _has;
}

@property (nonatomic) BOOL hasTid0;
@property (nonatomic) unsigned long long tid0;
@property (nonatomic) BOOL hasTid1;
@property (nonatomic) unsigned long long tid1;
@property (nonatomic) BOOL hasTid2;
@property (nonatomic) unsigned long long tid2;
@property (nonatomic) BOOL hasTid3;
@property (nonatomic) unsigned long long tid3;
@property (nonatomic) BOOL hasTid4;
@property (nonatomic) unsigned long long tid4;
@property (nonatomic) BOOL hasTid5;
@property (nonatomic) unsigned long long tid5;
@property (nonatomic) BOOL hasTid6;
@property (nonatomic) unsigned long long tid6;
@property (nonatomic) BOOL hasTid7;
@property (nonatomic) unsigned long long tid7;

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
