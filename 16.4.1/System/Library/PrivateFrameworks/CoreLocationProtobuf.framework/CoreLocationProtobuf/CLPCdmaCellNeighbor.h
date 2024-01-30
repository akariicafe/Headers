@interface CLPCdmaCellNeighbor : PBCodable <NSCopying> {
    struct { unsigned char channel : 1; unsigned char ecn0 : 1; unsigned char pilotPhase : 1; unsigned char pnoffset : 1; unsigned char rscp : 1; } _has;
}

@property (nonatomic) BOOL hasPnoffset;
@property (nonatomic) int pnoffset;
@property (nonatomic) BOOL hasPilotPhase;
@property (nonatomic) int pilotPhase;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) int rscp;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) int channel;

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
