@interface AWDWADiagnosisActionAssociationDifferences : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char additionalInfo : 1; unsigned char eventType : 1; unsigned char changedChannel : 1; unsigned char changedDNSPrimary : 1; unsigned char changedDNSSecondary : 1; unsigned char changedMAC : 1; unsigned char newBSSID : 1; } _has;
}

@property (nonatomic) BOOL hasNewBSSID;
@property (nonatomic) BOOL newBSSID;
@property (nonatomic) BOOL hasChangedChannel;
@property (nonatomic) BOOL changedChannel;
@property (nonatomic) BOOL hasChangedDNSPrimary;
@property (nonatomic) BOOL changedDNSPrimary;
@property (nonatomic) BOOL hasChangedDNSSecondary;
@property (nonatomic) BOOL changedDNSSecondary;
@property (nonatomic) BOOL hasChangedMAC;
@property (nonatomic) BOOL changedMAC;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasAdditionalInfo;
@property (nonatomic) unsigned int additionalInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)eventTypeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsEventType:(id)a0;

@end
