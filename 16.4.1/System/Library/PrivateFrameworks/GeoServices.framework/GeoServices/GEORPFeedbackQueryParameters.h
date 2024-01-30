@class PBDataReader, GEORPFilter, GEORPFeedbackComponentQueryParameters, PBUnknownFields;

@interface GEORPFeedbackQueryParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _feedbackComponentTypes;
    GEORPFeedbackComponentQueryParameters *_componentQueryParameters;
    GEORPFilter *_filter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_feedbackComponentTypes : 1; unsigned char read_componentQueryParameters : 1; unsigned char read_filter : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long feedbackComponentTypesCount;
@property (readonly, nonatomic) int *feedbackComponentTypes;
@property (readonly, nonatomic) BOOL hasFilter;
@property (retain, nonatomic) GEORPFilter *filter;
@property (readonly, nonatomic) BOOL hasComponentQueryParameters;
@property (retain, nonatomic) GEORPFeedbackComponentQueryParameters *componentQueryParameters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (int)StringAsFeedbackComponentTypes:(id)a0;
- (id)feedbackComponentTypesAsString:(int)a0;
- (void)addFeedbackComponentType:(int)a0;
- (void)clearFeedbackComponentTypes;
- (int)feedbackComponentTypeAtIndex:(unsigned long long)a0;
- (void)setFeedbackComponentTypes:(int *)a0 count:(unsigned long long)a1;

@end
