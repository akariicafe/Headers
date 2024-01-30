@class PBDataReader, NSString, GEOPDRating, GEOPDUser, NSMutableArray, PBUnknownFields;

@interface GEOPDReview : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDRating *_rating;
    NSString *_reviewId;
    double _reviewTime;
    GEOPDUser *_reviewer;
    NSMutableArray *_snippets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_reviewTime : 1; unsigned char read_unknownFields : 1; unsigned char read_rating : 1; unsigned char read_reviewId : 1; unsigned char read_reviewer : 1; unsigned char read_snippets : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)reviewsForPlaceData:(id)a0;

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)_bestSnippet;
- (id)_bestSnippetLocale;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
