@interface AWDChipCountersTx : PBCodable <NSCopying> {
    struct { unsigned char txbyte : 1; unsigned char txchit : 1; unsigned char txcmiss : 1; unsigned char txctl : 1; unsigned char txerror : 1; unsigned char txframe : 1; unsigned char txnoassoc : 1; unsigned char txnobuf : 1; unsigned char txprshort : 1; unsigned char txretrans : 1; unsigned char txrunt : 1; unsigned char txserr : 1; } _has;
}

@property (nonatomic) BOOL hasTxframe;
@property (nonatomic) unsigned long long txframe;
@property (nonatomic) BOOL hasTxbyte;
@property (nonatomic) unsigned long long txbyte;
@property (nonatomic) BOOL hasTxretrans;
@property (nonatomic) unsigned long long txretrans;
@property (nonatomic) BOOL hasTxerror;
@property (nonatomic) unsigned long long txerror;
@property (nonatomic) BOOL hasTxctl;
@property (nonatomic) unsigned long long txctl;
@property (nonatomic) BOOL hasTxprshort;
@property (nonatomic) unsigned long long txprshort;
@property (nonatomic) BOOL hasTxserr;
@property (nonatomic) unsigned long long txserr;
@property (nonatomic) BOOL hasTxnobuf;
@property (nonatomic) unsigned long long txnobuf;
@property (nonatomic) BOOL hasTxnoassoc;
@property (nonatomic) unsigned long long txnoassoc;
@property (nonatomic) BOOL hasTxrunt;
@property (nonatomic) unsigned long long txrunt;
@property (nonatomic) BOOL hasTxchit;
@property (nonatomic) unsigned long long txchit;
@property (nonatomic) BOOL hasTxcmiss;
@property (nonatomic) unsigned long long txcmiss;

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
