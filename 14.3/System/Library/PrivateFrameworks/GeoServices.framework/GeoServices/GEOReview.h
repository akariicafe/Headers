@class PBUnknownFields, NSString, PBDataReader, GEOUser;

@interface GEOReview : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_languageCode;
    double _reviewTime;
    GEOUser *_reviewer;
    double _score;
    NSString *_snippet;
    NSString *_uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isChinaSuppressed;
    struct { unsigned char has_reviewTime : 1; unsigned char has_score : 1; unsigned char has_isChinaSuppressed : 1; unsigned char read_unknownFields : 1; unsigned char read_languageCode : 1; unsigned char read_reviewer : 1; unsigned char read_snippet : 1; unsigned char read_uid : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSnippet;
@property (retain, nonatomic) NSString *snippet;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasReviewTime;
@property (nonatomic) double reviewTime;
@property (readonly, nonatomic) BOOL hasReviewer;
@property (retain, nonatomic) GEOUser *reviewer;
@property (readonly, nonatomic) BOOL hasUid;
@property (retain, nonatomic) NSString *uid;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL hasIsChinaSuppressed;
@property (nonatomic) BOOL isChinaSuppressed;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
