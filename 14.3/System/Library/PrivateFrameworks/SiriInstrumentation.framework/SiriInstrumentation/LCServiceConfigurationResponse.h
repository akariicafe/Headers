@class NSData, LCServiceLoggingConfiguration;

@interface LCServiceConfigurationResponse : PBCodable

@property (retain, nonatomic) LCServiceLoggingConfiguration *configuration;
@property (nonatomic) BOOL hasConfiguration;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichResponse;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
