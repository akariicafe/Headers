@class PBDataReader, NSString, GEORPTimestamp, GEORPPostedBy, NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackConversationMessage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_comments;
    GEORPTimestamp *_postedAt;
    GEORPPostedBy *_postedBy;
    NSMutableArray *_surveyResponses;
    NSString *_uuid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_comments : 1; unsigned char read_postedAt : 1; unsigned char read_postedBy : 1; unsigned char read_surveyResponses : 1; unsigned char read_uuid : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasPostedBy;
@property (retain, nonatomic) GEORPPostedBy *postedBy;
@property (readonly, nonatomic) BOOL hasPostedAt;
@property (retain, nonatomic) GEORPTimestamp *postedAt;
@property (readonly, nonatomic) BOOL hasComments;
@property (retain, nonatomic) NSString *comments;
@property (retain, nonatomic) NSMutableArray *surveyResponses;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)surveyResponseType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addSurveyResponse:(id)a0;
- (unsigned long long)surveyResponsesCount;
- (void)clearSurveyResponses;
- (id)surveyResponseAtIndex:(unsigned long long)a0;
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
- (id)dictionaryRepresentation;

@end
