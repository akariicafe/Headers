@class NSArray, NSData;

@interface ASRSchemaASRFinalResultGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tokenSilenceStartTimeInNsLists;
@property (copy, nonatomic) NSArray *correctPartialResultIndexLists;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addTokenSilenceStartTimeInNsList:(unsigned long long)a0;
- (void)addCorrectPartialResultIndexList:(int)a0;
- (void)clearTokenSilenceStartTimeInNsList;
- (unsigned long long)tokenSilenceStartTimeInNsListCount;
- (unsigned long long)tokenSilenceStartTimeInNsListAtIndex:(unsigned long long)a0;
- (void)clearCorrectPartialResultIndexList;
- (unsigned long long)correctPartialResultIndexListCount;
- (int)correctPartialResultIndexListAtIndex:(unsigned long long)a0;

@end
