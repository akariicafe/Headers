@class NSMutableArray;

@interface AWDMETRICSCellularPowerLogNRCarrierComponentInfo : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (retain, nonatomic) NSMutableArray *carrierInfos;

+ (Class)carrierInfoType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addCarrierInfo:(id)a0;
- (unsigned long long)carrierInfosCount;
- (void)clearCarrierInfos;
- (id)carrierInfoAtIndex:(unsigned long long)a0;

@end
