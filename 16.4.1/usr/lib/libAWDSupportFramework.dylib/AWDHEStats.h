@class AWDOMICntrs;

@interface AWDHEStats : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _rxherus;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _txherus;
    struct { unsigned char dlMumimoDur : 1; unsigned char dlMumimoPad : 1; unsigned char heColormissCnt : 1; unsigned char heMyAIDCnt : 1; unsigned char heNullZeroAgg : 1; unsigned char heRxhemuppduCnt : 1; unsigned char heRxhesuppduCnt : 1; unsigned char heRxtrigBasic : 1; unsigned char heRxtrigBfmCnt : 1; unsigned char heRxtrigBsrp : 1; unsigned char heRxtrigMubar : 1; unsigned char heRxtrigMurts : 1; unsigned char heRxtrigMyaid : 1; unsigned char heTbppduDur : 1; unsigned char heTbppduNdlimCnt : 1; unsigned char heTxhesuppduCnt : 1; unsigned char heTxtbppdu : 1; unsigned char ulAvgTxpwr : 1; } _has;
}

@property (nonatomic) BOOL hasHeRxtrigMyaid;
@property (nonatomic) unsigned int heRxtrigMyaid;
@property (nonatomic) BOOL hasHeRxtrigBasic;
@property (nonatomic) unsigned int heRxtrigBasic;
@property (nonatomic) BOOL hasHeRxtrigMurts;
@property (nonatomic) unsigned int heRxtrigMurts;
@property (nonatomic) BOOL hasHeRxtrigBsrp;
@property (nonatomic) unsigned int heRxtrigBsrp;
@property (nonatomic) BOOL hasHeRxtrigBfmCnt;
@property (nonatomic) unsigned int heRxtrigBfmCnt;
@property (nonatomic) BOOL hasHeRxtrigMubar;
@property (nonatomic) unsigned int heRxtrigMubar;
@property (nonatomic) BOOL hasHeRxhemuppduCnt;
@property (nonatomic) unsigned int heRxhemuppduCnt;
@property (nonatomic) BOOL hasHeTxtbppdu;
@property (nonatomic) unsigned int heTxtbppdu;
@property (nonatomic) BOOL hasHeRxhesuppduCnt;
@property (nonatomic) unsigned int heRxhesuppduCnt;
@property (nonatomic) BOOL hasHeNullZeroAgg;
@property (nonatomic) unsigned int heNullZeroAgg;
@property (nonatomic) BOOL hasHeMyAIDCnt;
@property (nonatomic) unsigned int heMyAIDCnt;
@property (readonly, nonatomic) unsigned long long rxherusCount;
@property (readonly, nonatomic) unsigned int *rxherus;
@property (readonly, nonatomic) unsigned long long txherusCount;
@property (readonly, nonatomic) unsigned int *txherus;
@property (nonatomic) BOOL hasHeTbppduNdlimCnt;
@property (nonatomic) unsigned int heTbppduNdlimCnt;
@property (nonatomic) BOOL hasHeTbppduDur;
@property (nonatomic) unsigned int heTbppduDur;
@property (nonatomic) BOOL hasDlMumimoPad;
@property (nonatomic) unsigned int dlMumimoPad;
@property (nonatomic) BOOL hasDlMumimoDur;
@property (nonatomic) unsigned int dlMumimoDur;
@property (nonatomic) BOOL hasUlAvgTxpwr;
@property (nonatomic) int ulAvgTxpwr;
@property (nonatomic) BOOL hasHeColormissCnt;
@property (nonatomic) unsigned int heColormissCnt;
@property (nonatomic) BOOL hasHeTxhesuppduCnt;
@property (nonatomic) unsigned int heTxhesuppduCnt;
@property (readonly, nonatomic) BOOL hasOmicntrs;
@property (retain, nonatomic) AWDOMICntrs *omicntrs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addRxheru:(unsigned int)a0;
- (void)addTxheru:(unsigned int)a0;
- (void)clearRxherus;
- (void)clearTxherus;
- (unsigned int)rxheruAtIndex:(unsigned long long)a0;
- (void)setRxherus:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setTxherus:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)txheruAtIndex:(unsigned long long)a0;

@end
