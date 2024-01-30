@class NSString, NSMutableArray, NPKProtoStandalonePaymentSetupProduct;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSMutableArray *setupFields;
@property (readonly, nonatomic) BOOL hasProduct;
@property (retain, nonatomic) NPKProtoStandalonePaymentSetupProduct *product;

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
