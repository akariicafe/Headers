@class NSArray, NSData;

@interface TTSSchemaTTSSpeechFailed : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *errorCodes;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addErrorCodes:(int)a0;
- (void)clearErrorCodes;
- (unsigned long long)errorCodesCount;
- (int)errorCodesAtIndex:(unsigned long long)a0;

@end
