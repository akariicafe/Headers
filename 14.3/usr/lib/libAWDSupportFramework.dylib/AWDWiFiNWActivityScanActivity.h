@interface AWDWiFiNWActivityScanActivity : PBCodable <NSCopying> {
    struct { unsigned char assocCount : 1; unsigned char assocDur : 1; unsigned char otherCount : 1; unsigned char otherDur : 1; unsigned char pnoBSSIDCount : 1; unsigned char pnoBSSIDDur : 1; unsigned char pnoSSIDCount : 1; unsigned char pnoSSIDDur : 1; unsigned char roamCount : 1; unsigned char roamDur : 1; unsigned char userCount : 1; unsigned char userDur : 1; } _has;
}

@property (nonatomic) BOOL hasUserCount;
@property (nonatomic) unsigned int userCount;
@property (nonatomic) BOOL hasUserDur;
@property (nonatomic) unsigned int userDur;
@property (nonatomic) BOOL hasRoamCount;
@property (nonatomic) unsigned int roamCount;
@property (nonatomic) BOOL hasRoamDur;
@property (nonatomic) unsigned int roamDur;
@property (nonatomic) BOOL hasAssocCount;
@property (nonatomic) unsigned int assocCount;
@property (nonatomic) BOOL hasAssocDur;
@property (nonatomic) unsigned int assocDur;
@property (nonatomic) BOOL hasPnoBSSIDCount;
@property (nonatomic) unsigned int pnoBSSIDCount;
@property (nonatomic) BOOL hasPnoBSSIDDur;
@property (nonatomic) unsigned int pnoBSSIDDur;
@property (nonatomic) BOOL hasPnoSSIDCount;
@property (nonatomic) unsigned int pnoSSIDCount;
@property (nonatomic) BOOL hasPnoSSIDDur;
@property (nonatomic) unsigned int pnoSSIDDur;
@property (nonatomic) BOOL hasOtherCount;
@property (nonatomic) unsigned int otherCount;
@property (nonatomic) BOOL hasOtherDur;
@property (nonatomic) unsigned int otherDur;

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
