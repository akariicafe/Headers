@class PBDataReader, NSData, NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackQueryResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackInfos;
    NSData *_nextPageToken;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_feedbackInfos : 1; unsigned char read_nextPageToken : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *feedbackInfos;
@property (readonly, nonatomic) BOOL hasNextPageToken;
@property (retain, nonatomic) NSData *nextPageToken;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)feedbackInfoType;
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
- (void)addFeedbackInfo:(id)a0;
- (unsigned long long)feedbackInfosCount;
- (void)clearFeedbackInfos;
- (id)feedbackInfoAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
