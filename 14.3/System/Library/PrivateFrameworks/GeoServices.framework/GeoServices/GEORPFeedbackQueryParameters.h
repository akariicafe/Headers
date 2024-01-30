@class PBDataReader, GEORPSortParameters, GEORPFilter, GEORPPageInfo, PBUnknownFields;

@interface GEORPFeedbackQueryParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _feedbackComponentTypes;
    GEORPFilter *_filter;
    GEORPPageInfo *_pageInfo;
    GEORPSortParameters *_sortParameters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_feedbackComponentTypes : 1; unsigned char read_filter : 1; unsigned char read_pageInfo : 1; unsigned char read_sortParameters : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSortParameters;
@property (retain, nonatomic) GEORPSortParameters *sortParameters;
@property (readonly, nonatomic) BOOL hasPageInfo;
@property (retain, nonatomic) GEORPPageInfo *pageInfo;
@property (readonly, nonatomic) unsigned long long feedbackComponentTypesCount;
@property (readonly, nonatomic) int *feedbackComponentTypes;
@property (readonly, nonatomic) BOOL hasFilter;
@property (retain, nonatomic) GEORPFilter *filter;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addFeedbackComponentType:(int)a0;
- (void)clearFeedbackComponentTypes;
- (int)feedbackComponentTypeAtIndex:(unsigned long long)a0;
- (void)setFeedbackComponentTypes:(int *)a0 count:(unsigned long long)a1;
- (id)feedbackComponentTypesAsString:(int)a0;
- (int)StringAsFeedbackComponentTypes:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
