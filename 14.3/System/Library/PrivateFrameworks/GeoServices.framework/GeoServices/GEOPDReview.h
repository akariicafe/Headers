@class PBDataReader, GEOPDUser, NSString, GEOPDRating, NSMutableArray, PBUnknownFields;

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

@property (retain, nonatomic) NSMutableArray *snippets;
@property (nonatomic) BOOL hasReviewTime;
@property (nonatomic) double reviewTime;
@property (readonly, nonatomic) BOOL hasReviewer;
@property (retain, nonatomic) GEOPDUser *reviewer;
@property (readonly, nonatomic) BOOL hasReviewId;
@property (retain, nonatomic) NSString *reviewId;
@property (readonly, nonatomic) BOOL hasRating;
@property (retain, nonatomic) GEOPDRating *rating;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)snippetType;
+ (id)reviewsForPlaceData:(id)a0;
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
- (void)writeTo:(id)a0;
- (void)addSnippet:(id)a0;
- (unsigned long long)snippetsCount;
- (void)clearSnippets;
- (id)snippetAtIndex:(unsigned long long)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)_bestSnippet;
- (id)_bestSnippetLocale;

@end
