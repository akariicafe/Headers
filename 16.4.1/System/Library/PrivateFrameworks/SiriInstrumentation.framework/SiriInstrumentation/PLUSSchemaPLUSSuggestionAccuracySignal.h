@class NSData;

@interface PLUSSchemaPLUSSuggestionAccuracySignal : SISchemaInstrumentationMessage {
    struct { unsigned char signalType : 1; unsigned char signalSource : 1; } _has;
}

@property (nonatomic) int signalType;
@property (nonatomic) BOOL hasSignalType;
@property (nonatomic) int signalSource;
@property (nonatomic) BOOL hasSignalSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteSignalSource;
- (void)deleteSignalType;

@end
