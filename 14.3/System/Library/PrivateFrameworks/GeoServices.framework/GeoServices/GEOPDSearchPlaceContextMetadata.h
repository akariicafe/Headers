@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDSearchPlaceContextMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alternateSearchableNames;
    NSString *_interpretedCategory;
    NSString *_matchedDisplayNameLanguageCode;
    NSString *_matchedDisplayName;
    NSString *_normalizedQuery;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isDefaultName;
    struct { unsigned char has_isDefaultName : 1; unsigned char read_unknownFields : 1; unsigned char read_alternateSearchableNames : 1; unsigned char read_interpretedCategory : 1; unsigned char read_matchedDisplayNameLanguageCode : 1; unsigned char read_matchedDisplayName : 1; unsigned char read_normalizedQuery : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMatchedDisplayName;
@property (retain, nonatomic) NSString *matchedDisplayName;
@property (nonatomic) BOOL hasIsDefaultName;
@property (nonatomic) BOOL isDefaultName;
@property (readonly, nonatomic) BOOL hasNormalizedQuery;
@property (retain, nonatomic) NSString *normalizedQuery;
@property (readonly, nonatomic) BOOL hasInterpretedCategory;
@property (retain, nonatomic) NSString *interpretedCategory;
@property (readonly, nonatomic) BOOL hasMatchedDisplayNameLanguageCode;
@property (retain, nonatomic) NSString *matchedDisplayNameLanguageCode;
@property (retain, nonatomic) NSMutableArray *alternateSearchableNames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)alternateSearchableNameType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)alternateSearchableNameAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addAlternateSearchableName:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)alternateSearchableNamesCount;
- (id)initWithDictionary:(id)a0;
- (void)clearAlternateSearchableNames;

@end
