@interface AWDMETRICSCellularPowerLogPLMNScanEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char duration : 1; unsigned char reasonForScan : 1; unsigned char scanResult : 1; unsigned char scanType : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasScanResult;
@property (nonatomic) int scanResult;
@property (nonatomic) BOOL hasScanType;
@property (nonatomic) int scanType;
@property (nonatomic) BOOL hasReasonForScan;
@property (nonatomic) int reasonForScan;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsScanType:(id)a0;
- (id)scanTypeAsString:(int)a0;
- (id)scanResultAsString:(int)a0;
- (int)StringAsScanResult:(id)a0;
- (id)reasonForScanAsString:(int)a0;
- (int)StringAsReasonForScan:(id)a0;

@end
