@interface AWDWiFiLTECoexTxBlanking : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char type4BlankingCount : 1; unsigned char type4BlankingTimeInMS : 1; unsigned char type4ResumeCount : 1; unsigned char type7BlankingCount : 1; unsigned char type7BlankingTimeInMS : 1; unsigned char type7ResumeCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasType4BlankingCount;
@property (nonatomic) unsigned long long type4BlankingCount;
@property (nonatomic) BOOL hasType4ResumeCount;
@property (nonatomic) unsigned long long type4ResumeCount;
@property (nonatomic) BOOL hasType4BlankingTimeInMS;
@property (nonatomic) unsigned long long type4BlankingTimeInMS;
@property (nonatomic) BOOL hasType7BlankingCount;
@property (nonatomic) unsigned long long type7BlankingCount;
@property (nonatomic) BOOL hasType7ResumeCount;
@property (nonatomic) unsigned long long type7ResumeCount;
@property (nonatomic) BOOL hasType7BlankingTimeInMS;
@property (nonatomic) unsigned long long type7BlankingTimeInMS;

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
