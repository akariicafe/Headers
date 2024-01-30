@class RRSchemaProvisionalPullerStarted, NSData, RRSchemaProvisionalPullerEnded, RRSchemaProvisionalPullerFailed;

@interface RRSchemaProvisionalPullerContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) RRSchemaProvisionalPullerStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) RRSchemaProvisionalPullerEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) RRSchemaProvisionalPullerFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;

@end
