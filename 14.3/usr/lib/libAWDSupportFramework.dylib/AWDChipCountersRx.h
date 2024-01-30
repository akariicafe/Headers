@interface AWDChipCountersRx : PBCodable <NSCopying> {
    struct { unsigned char rxbadcm : 1; unsigned char rxbadda : 1; unsigned char rxbadds : 1; unsigned char rxbadproto : 1; unsigned char rxbadsrcmac : 1; unsigned char rxbyte : 1; unsigned char rxctl : 1; unsigned char rxerror : 1; unsigned char rxfilter : 1; unsigned char rxfragerr : 1; unsigned char rxframe : 1; unsigned char rxgiant : 1; unsigned char rxnobuf : 1; unsigned char rxnondata : 1; unsigned char rxnoscb : 1; unsigned char rxrtry : 1; unsigned char rxrunt : 1; } _has;
}

@property (nonatomic) BOOL hasRxframe;
@property (nonatomic) unsigned long long rxframe;
@property (nonatomic) BOOL hasRxbyte;
@property (nonatomic) unsigned long long rxbyte;
@property (nonatomic) BOOL hasRxerror;
@property (nonatomic) unsigned long long rxerror;
@property (nonatomic) BOOL hasRxctl;
@property (nonatomic) unsigned long long rxctl;
@property (nonatomic) BOOL hasRxnobuf;
@property (nonatomic) unsigned long long rxnobuf;
@property (nonatomic) BOOL hasRxrtry;
@property (nonatomic) unsigned long long rxrtry;
@property (nonatomic) BOOL hasRxnondata;
@property (nonatomic) unsigned long long rxnondata;
@property (nonatomic) BOOL hasRxbadds;
@property (nonatomic) unsigned long long rxbadds;
@property (nonatomic) BOOL hasRxbadcm;
@property (nonatomic) unsigned long long rxbadcm;
@property (nonatomic) BOOL hasRxfragerr;
@property (nonatomic) unsigned long long rxfragerr;
@property (nonatomic) BOOL hasRxrunt;
@property (nonatomic) unsigned long long rxrunt;
@property (nonatomic) BOOL hasRxgiant;
@property (nonatomic) unsigned long long rxgiant;
@property (nonatomic) BOOL hasRxnoscb;
@property (nonatomic) unsigned long long rxnoscb;
@property (nonatomic) BOOL hasRxbadproto;
@property (nonatomic) unsigned long long rxbadproto;
@property (nonatomic) BOOL hasRxbadsrcmac;
@property (nonatomic) unsigned long long rxbadsrcmac;
@property (nonatomic) BOOL hasRxbadda;
@property (nonatomic) unsigned long long rxbadda;
@property (nonatomic) BOOL hasRxfilter;
@property (nonatomic) unsigned long long rxfilter;

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
