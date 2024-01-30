@class NSString, NSData;

@interface ASRSchemaASRRecognizerComponents : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *frontend;
@property (nonatomic) BOOL hasFrontend;
@property (copy, nonatomic) NSString *decodable;
@property (nonatomic) BOOL hasDecodable;
@property (copy, nonatomic) NSString *decoder;
@property (nonatomic) BOOL hasDecoder;
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
- (void)deleteDecodable;
- (void)deleteDecoder;
- (void)deleteFrontend;

@end
