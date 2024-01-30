@class NETSchemaNETEndpoint, NSData;

@interface NETSchemaNETEstablishmentResolution : SISchemaInstrumentationMessage {
    struct { unsigned char duration : 1; unsigned char resolutionSource : 1; unsigned char endpointCount : 1; } _has;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int resolutionSource;
@property (nonatomic) BOOL hasResolutionSource;
@property (retain, nonatomic) NETSchemaNETEndpoint *successfulEndpoint;
@property (nonatomic) BOOL hasSuccessfulEndpoint;
@property (retain, nonatomic) NETSchemaNETEndpoint *preferredEndpoint;
@property (nonatomic) BOOL hasPreferredEndpoint;
@property (nonatomic) unsigned int endpointCount;
@property (nonatomic) BOOL hasEndpointCount;
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
