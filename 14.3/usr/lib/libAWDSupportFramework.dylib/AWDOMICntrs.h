@interface AWDOMICntrs : PBCodable <NSCopying> {
    struct { unsigned char heOmitxDlmursdrec : 1; unsigned char heOmitxDlmursdrecAck : 1; unsigned char heOmitxDur : 1; unsigned char heOmitxRetries : 1; unsigned char heOmitxSched : 1; unsigned char heOmitxSuccess : 1; unsigned char heOmitxTxnsts : 1; unsigned char heOmitxTxnstsAck : 1; unsigned char heOmitxUlmucfg : 1; unsigned char heOmitxUlmucfgAck : 1; } _has;
}

@property (nonatomic) BOOL hasHeOmitxSched;
@property (nonatomic) unsigned int heOmitxSched;
@property (nonatomic) BOOL hasHeOmitxSuccess;
@property (nonatomic) unsigned int heOmitxSuccess;
@property (nonatomic) BOOL hasHeOmitxRetries;
@property (nonatomic) unsigned int heOmitxRetries;
@property (nonatomic) BOOL hasHeOmitxDur;
@property (nonatomic) unsigned int heOmitxDur;
@property (nonatomic) BOOL hasHeOmitxUlmucfg;
@property (nonatomic) unsigned int heOmitxUlmucfg;
@property (nonatomic) BOOL hasHeOmitxUlmucfgAck;
@property (nonatomic) unsigned int heOmitxUlmucfgAck;
@property (nonatomic) BOOL hasHeOmitxTxnsts;
@property (nonatomic) unsigned int heOmitxTxnsts;
@property (nonatomic) BOOL hasHeOmitxTxnstsAck;
@property (nonatomic) unsigned int heOmitxTxnstsAck;
@property (nonatomic) BOOL hasHeOmitxDlmursdrec;
@property (nonatomic) unsigned int heOmitxDlmursdrec;
@property (nonatomic) BOOL hasHeOmitxDlmursdrecAck;
@property (nonatomic) unsigned int heOmitxDlmursdrecAck;

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
