@interface AWDMacCountersRx : PBCodable <NSCopying> {
    struct { unsigned char rxackucast : 1; unsigned char rxcfrmmcast : 1; unsigned char rxcfrmocast : 1; unsigned char rxcfrmucast : 1; unsigned char rxctsocast : 1; unsigned char rxctsucast : 1; unsigned char rxdfrmmcast : 1; unsigned char rxdfrmocast : 1; unsigned char rxdfrmucastmbss : 1; unsigned char rxmfrmmcast : 1; unsigned char rxmfrmocast : 1; unsigned char rxmfrmucastmbss : 1; unsigned char rxrtsocast : 1; unsigned char rxrtsucast : 1; } _has;
}

@property (nonatomic) BOOL hasRxdfrmucastmbss;
@property (nonatomic) unsigned long long rxdfrmucastmbss;
@property (nonatomic) BOOL hasRxmfrmucastmbss;
@property (nonatomic) unsigned long long rxmfrmucastmbss;
@property (nonatomic) BOOL hasRxcfrmucast;
@property (nonatomic) unsigned long long rxcfrmucast;
@property (nonatomic) BOOL hasRxrtsucast;
@property (nonatomic) unsigned long long rxrtsucast;
@property (nonatomic) BOOL hasRxctsucast;
@property (nonatomic) unsigned long long rxctsucast;
@property (nonatomic) BOOL hasRxackucast;
@property (nonatomic) unsigned long long rxackucast;
@property (nonatomic) BOOL hasRxdfrmocast;
@property (nonatomic) unsigned long long rxdfrmocast;
@property (nonatomic) BOOL hasRxmfrmocast;
@property (nonatomic) unsigned long long rxmfrmocast;
@property (nonatomic) BOOL hasRxcfrmocast;
@property (nonatomic) unsigned long long rxcfrmocast;
@property (nonatomic) BOOL hasRxrtsocast;
@property (nonatomic) unsigned long long rxrtsocast;
@property (nonatomic) BOOL hasRxctsocast;
@property (nonatomic) unsigned long long rxctsocast;
@property (nonatomic) BOOL hasRxdfrmmcast;
@property (nonatomic) unsigned long long rxdfrmmcast;
@property (nonatomic) BOOL hasRxmfrmmcast;
@property (nonatomic) unsigned long long rxmfrmmcast;
@property (nonatomic) BOOL hasRxcfrmmcast;
@property (nonatomic) unsigned long long rxcfrmmcast;

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
