@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackIdLookupParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _feedbackComponentTypes;
    NSMutableArray *_feedbackIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_feedbackComponentTypes : 1; unsigned char read_feedbackIds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *feedbackIds;
@property (readonly, nonatomic) unsigned long long feedbackComponentTypesCount;
@property (readonly, nonatomic) int *feedbackComponentTypes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)feedbackIdType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)feedbackComponentTypeAtIndex:(unsigned long long)a0;
- (void)addFeedbackId:(id)a0;
- (void)addFeedbackComponentType:(int)a0;
- (unsigned long long)feedbackIdsCount;
- (void)clearFeedbackIds;
- (id)feedbackIdAtIndex:(unsigned long long)a0;
- (void)clearFeedbackComponentTypes;
- (id)feedbackComponentTypesAsString:(int)a0;
- (void)setFeedbackComponentTypes:(int *)a0 count:(unsigned long long)a1;
- (int)StringAsFeedbackComponentTypes:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
