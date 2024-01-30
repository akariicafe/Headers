@class NSString, NSData;

@interface TTSSchemaTTSAudioInterface : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *vendorId;
@property (nonatomic) BOOL hasVendorId;
@property (copy, nonatomic) NSString *productId;
@property (nonatomic) BOOL hasProductId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteProductId;
- (void)deleteVendorId;

@end
