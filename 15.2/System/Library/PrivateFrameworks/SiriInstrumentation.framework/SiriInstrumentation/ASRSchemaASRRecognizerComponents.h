@class NSString, NSData;

@interface ASRSchemaASRRecognizerComponents : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *frontend;
@property (nonatomic) BOOL hasFrontend;
@property (copy, nonatomic) NSString *decodable;
@property (nonatomic) BOOL hasDecodable;
@property (copy, nonatomic) NSString *decoder;
@property (nonatomic) BOOL hasDecoder;
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
