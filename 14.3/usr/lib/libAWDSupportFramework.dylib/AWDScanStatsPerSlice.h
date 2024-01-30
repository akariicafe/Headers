@class NSMutableArray;

@interface AWDScanStatsPerSlice : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _numChanScanneds;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _numScanBlankeds;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _numScanModes;
    struct { unsigned char numAbort : 1; unsigned char avgAgeScan : 1; unsigned char numScanWifiCritical : 1; } _has;
}

@property (nonatomic) BOOL hasNumAbort;
@property (nonatomic) unsigned long long numAbort;
@property (nonatomic) BOOL hasNumScanWifiCritical;
@property (nonatomic) unsigned int numScanWifiCritical;
@property (nonatomic) BOOL hasAvgAgeScan;
@property (nonatomic) unsigned int avgAgeScan;
@property (readonly, nonatomic) unsigned long long numChanScannedsCount;
@property (readonly, nonatomic) unsigned int *numChanScanneds;
@property (readonly, nonatomic) unsigned long long numScanModesCount;
@property (readonly, nonatomic) unsigned int *numScanModes;
@property (readonly, nonatomic) unsigned long long numScanBlankedsCount;
@property (readonly, nonatomic) unsigned int *numScanBlankeds;
@property (retain, nonatomic) NSMutableArray *scanObjects;

+ (Class)scanObjectType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addScanObject:(id)a0;
- (void)clearNumChanScanneds;
- (unsigned int)numChanScannedAtIndex:(unsigned long long)a0;
- (void)addNumChanScanned:(unsigned int)a0;
- (void)clearNumScanModes;
- (unsigned int)numScanModeAtIndex:(unsigned long long)a0;
- (void)addNumScanMode:(unsigned int)a0;
- (void)clearNumScanBlankeds;
- (unsigned int)numScanBlankedAtIndex:(unsigned long long)a0;
- (void)addNumScanBlanked:(unsigned int)a0;
- (unsigned long long)scanObjectsCount;
- (void)clearScanObjects;
- (id)scanObjectAtIndex:(unsigned long long)a0;
- (void)setNumChanScanneds:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setNumScanModes:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setNumScanBlankeds:(unsigned int *)a0 count:(unsigned long long)a1;

@end
