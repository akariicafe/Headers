@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventClientACSuggestions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_entries;
    long long _overallLatencyInMs;
    NSMutableArray *_queryTokens;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _keypressStatus;
    int _selectedIndex;
    int _selectedSectionIndex;
    int _trigger;
    int _withinSectionSelectedIndex;
    BOOL _isRerankerTriggered;
    BOOL _isRetainedQuery;
    BOOL _shouldDifferentiateClientAndServerResults;
    struct { unsigned char has_overallLatencyInMs : 1; unsigned char has_keypressStatus : 1; unsigned char has_selectedIndex : 1; unsigned char has_selectedSectionIndex : 1; unsigned char has_trigger : 1; unsigned char has_withinSectionSelectedIndex : 1; unsigned char has_isRerankerTriggered : 1; unsigned char has_isRetainedQuery : 1; unsigned char has_shouldDifferentiateClientAndServerResults : 1; unsigned char read_entries : 1; unsigned char read_queryTokens : 1; unsigned char read_query : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSMutableArray *queryTokens;
@property (retain, nonatomic) NSMutableArray *entries;
@property (nonatomic) BOOL hasSelectedIndex;
@property (nonatomic) int selectedIndex;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) BOOL hasKeypressStatus;
@property (nonatomic) int keypressStatus;
@property (nonatomic) BOOL hasWithinSectionSelectedIndex;
@property (nonatomic) int withinSectionSelectedIndex;
@property (nonatomic) BOOL hasSelectedSectionIndex;
@property (nonatomic) int selectedSectionIndex;
@property (nonatomic) BOOL hasIsRetainedQuery;
@property (nonatomic) BOOL isRetainedQuery;
@property (nonatomic) BOOL hasIsRerankerTriggered;
@property (nonatomic) BOOL isRerankerTriggered;
@property (nonatomic) BOOL hasOverallLatencyInMs;
@property (nonatomic) long long overallLatencyInMs;
@property (nonatomic) BOOL hasShouldDifferentiateClientAndServerResults;
@property (nonatomic) BOOL shouldDifferentiateClientAndServerResults;

+ (Class)queryTokensType;
+ (Class)entriesType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addQueryTokens:(id)a0;
- (unsigned long long)queryTokensCount;
- (void)clearQueryTokens;
- (id)queryTokensAtIndex:(unsigned long long)a0;
- (id)keypressStatusAsString:(int)a0;
- (int)StringAsKeypressStatus:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)triggerAsString:(int)a0;
- (int)StringAsTrigger:(id)a0;
- (unsigned long long)entriesCount;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (void)addEntries:(id)a0;

@end
