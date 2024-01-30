@class NSString, NSData, SISchemaDictationAlternativesPresent;

@interface SISchemaDictationTranscriptionMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char dictationModel : 1; } _has;
}

@property (nonatomic) int dictationModel;
@property (nonatomic) BOOL hasDictationModel;
@property (copy, nonatomic) NSString *dictationModelVersion;
@property (nonatomic) BOOL hasDictationModelVersion;
@property (retain, nonatomic) SISchemaDictationAlternativesPresent *dictationAlternativesPresent;
@property (nonatomic) BOOL hasDictationAlternativesPresent;
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
