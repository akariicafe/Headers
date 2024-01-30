@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchSpellerResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_debugResponse;
    unsigned long long _decileId;
    double _latencyMs;
    double _misspellScore;
    NSMutableArray *_spellSuggestions;
    NSMutableArray *_tokenCandidates;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _modelNumberMajor;
    unsigned int _modelNumberMinor;
    int _rankerModelType;
    int _resultStatus;
    BOOL _isFromDLCacheModel;
    BOOL _isFromDLRuntimeModel;
    struct { unsigned char has_decileId : 1; unsigned char has_latencyMs : 1; unsigned char has_misspellScore : 1; unsigned char has_modelNumberMajor : 1; unsigned char has_modelNumberMinor : 1; unsigned char has_rankerModelType : 1; unsigned char has_resultStatus : 1; unsigned char has_isFromDLCacheModel : 1; unsigned char has_isFromDLRuntimeModel : 1; unsigned char read_debugResponse : 1; unsigned char read_spellSuggestions : 1; unsigned char read_tokenCandidates : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *spellSuggestions;
@property (nonatomic) BOOL hasResultStatus;
@property (nonatomic) int resultStatus;
@property (nonatomic) BOOL hasDecileId;
@property (nonatomic) unsigned long long decileId;
@property (nonatomic) BOOL hasLatencyMs;
@property (nonatomic) double latencyMs;
@property (retain, nonatomic) NSMutableArray *tokenCandidates;
@property (nonatomic) BOOL hasMisspellScore;
@property (nonatomic) double misspellScore;
@property (readonly, nonatomic) BOOL hasDebugResponse;
@property (retain, nonatomic) NSString *debugResponse;
@property (nonatomic) BOOL hasRankerModelType;
@property (nonatomic) int rankerModelType;
@property (nonatomic) BOOL hasIsFromDLCacheModel;
@property (nonatomic) BOOL isFromDLCacheModel;
@property (nonatomic) BOOL hasIsFromDLRuntimeModel;
@property (nonatomic) BOOL isFromDLRuntimeModel;
@property (nonatomic) BOOL hasModelNumberMajor;
@property (nonatomic) unsigned int modelNumberMajor;
@property (nonatomic) BOOL hasModelNumberMinor;
@property (nonatomic) unsigned int modelNumberMinor;

+ (BOOL)isValid:(id)a0;
+ (Class)spellSuggestionType;
+ (Class)tokenCandidatesType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsRankerModelType:(id)a0;
- (int)StringAsResultStatus:(id)a0;
- (void)addSpellSuggestion:(id)a0;
- (void)addTokenCandidates:(id)a0;
- (void)clearSpellSuggestions;
- (void)clearTokenCandidates;
- (id)rankerModelTypeAsString:(int)a0;
- (id)resultStatusAsString:(int)a0;
- (id)spellSuggestionAtIndex:(unsigned long long)a0;
- (unsigned long long)spellSuggestionsCount;
- (id)tokenCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenCandidatesCount;

@end
