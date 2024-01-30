@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext : PBCodable <NSCopying> {
    struct { unsigned char cameraFirstProvisioningEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasCameraFirstProvisioningEnabled;
@property (nonatomic) BOOL cameraFirstProvisioningEnabled;
@property (retain, nonatomic) NSMutableArray *setupFields;

+ (Class)setupFieldsType;

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
- (void)addSetupFields:(id)a0;
- (unsigned long long)setupFieldsCount;
- (void)clearSetupFields;
- (id)setupFieldsAtIndex:(unsigned long long)a0;

@end
