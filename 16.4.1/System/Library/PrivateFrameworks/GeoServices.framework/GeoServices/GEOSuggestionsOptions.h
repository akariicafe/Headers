@class PBUnknownFields, NSData, PBDataReader;

@interface GEOSuggestionsOptions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _entriesType;
    int _listType;
    BOOL _includeRankingFeatures;
    BOOL _normalizePOIs;
    struct { unsigned char has_entriesType : 1; unsigned char has_listType : 1; unsigned char has_includeRankingFeatures : 1; unsigned char has_normalizePOIs : 1; unsigned char read_unknownFields : 1; unsigned char read_suggestionEntryMetadata : 1; unsigned char read_suggestionMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
