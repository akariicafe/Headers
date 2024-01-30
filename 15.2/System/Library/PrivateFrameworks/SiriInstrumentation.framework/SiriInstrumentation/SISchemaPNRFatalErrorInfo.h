@class NSString, NSData;

@interface SISchemaPNRFatalErrorInfo : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (copy, nonatomic) NSString *errorCode;
@property (nonatomic) BOOL hasErrorCode;
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
