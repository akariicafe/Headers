@class NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext : PBCodable <NSCopying> {
    struct { unsigned char ingestionProgress : 1; unsigned char ingestionState : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPhysicalCardImageURL;
@property (retain, nonatomic) NSString *physicalCardImageURL;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hasIngestionState;
@property (nonatomic) int ingestionState;
@property (nonatomic) BOOL hasIngestionProgress;
@property (nonatomic) float ingestionProgress;

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
- (id)ingestionStateAsString:(int)a0;
- (int)StringAsIngestionState:(id)a0;

@end
