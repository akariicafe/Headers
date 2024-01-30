@class NSString, NSData;

@interface NETSchemaNETSessionConnectionHttpHeaderCreated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *userAgent;
@property (nonatomic) BOOL hasUserAgent;
@property (copy, nonatomic) NSString *aceHost;
@property (nonatomic) BOOL hasAceHost;
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
