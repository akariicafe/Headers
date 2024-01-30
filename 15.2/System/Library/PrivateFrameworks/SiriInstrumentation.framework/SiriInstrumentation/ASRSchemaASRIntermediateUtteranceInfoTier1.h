@class NSString, NSData;

@interface ASRSchemaASRIntermediateUtteranceInfoTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *unrepairedPostItn;
@property (nonatomic) BOOL hasUnrepairedPostItn;
@property (copy, nonatomic) NSString *phoneticMatchInput;
@property (nonatomic) BOOL hasPhoneticMatchInput;
@property (copy, nonatomic) NSString *phoneticMatchOutput;
@property (nonatomic) BOOL hasPhoneticMatchOutput;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
