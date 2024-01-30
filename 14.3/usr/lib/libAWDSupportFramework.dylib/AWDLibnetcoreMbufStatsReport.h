@interface AWDLibnetcoreMbufStatsReport : PBCodable <NSCopying> {
    struct { unsigned char mbuf16KBTotal : 1; unsigned char mbuf256BTotal : 1; unsigned char mbuf2KBTotal : 1; unsigned char mbuf4KBTotal : 1; unsigned char mbufDrainCount : 1; unsigned char mbufMemReleased : 1; unsigned char sockAtMBLimit : 1; unsigned char sockMBcnt : 1; } _has;
}

@property (nonatomic) BOOL hasMbuf256BTotal;
@property (nonatomic) unsigned long long mbuf256BTotal;
@property (nonatomic) BOOL hasMbuf2KBTotal;
@property (nonatomic) unsigned long long mbuf2KBTotal;
@property (nonatomic) BOOL hasMbuf4KBTotal;
@property (nonatomic) unsigned long long mbuf4KBTotal;
@property (nonatomic) BOOL hasMbuf16KBTotal;
@property (nonatomic) unsigned long long mbuf16KBTotal;
@property (nonatomic) BOOL hasSockMBcnt;
@property (nonatomic) unsigned long long sockMBcnt;
@property (nonatomic) BOOL hasSockAtMBLimit;
@property (nonatomic) unsigned long long sockAtMBLimit;
@property (nonatomic) BOOL hasMbufMemReleased;
@property (nonatomic) unsigned long long mbufMemReleased;
@property (nonatomic) BOOL hasMbufDrainCount;
@property (nonatomic) unsigned long long mbufDrainCount;

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
