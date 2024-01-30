@class NSData;

@interface NETSchemaNETDebugSessionConnectionQuality : SISchemaInstrumentationMessage {
    struct { unsigned char symptomsCellularHistorical : 1; unsigned char symptomsCellularInstant : 1; unsigned char symptomsWiFiHistorical : 1; unsigned char symptomsWiFiInstant : 1; } _has;
}

@property (nonatomic) int symptomsCellularHistorical;
@property (nonatomic) BOOL hasSymptomsCellularHistorical;
@property (nonatomic) int symptomsCellularInstant;
@property (nonatomic) BOOL hasSymptomsCellularInstant;
@property (nonatomic) int symptomsWiFiHistorical;
@property (nonatomic) BOOL hasSymptomsWiFiHistorical;
@property (nonatomic) int symptomsWiFiInstant;
@property (nonatomic) BOOL hasSymptomsWiFiInstant;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
