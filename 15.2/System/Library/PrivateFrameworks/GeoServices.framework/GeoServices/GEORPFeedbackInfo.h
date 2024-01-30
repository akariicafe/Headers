@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackComponents;
    NSString *_feedbackId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    struct { unsigned char has_status : 1; unsigned char read_unknownFields : 1; unsigned char read_feedbackComponents : 1; unsigned char read_feedbackId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasFeedbackId;
@property (retain, nonatomic) NSString *feedbackId;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *feedbackComponents;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)feedbackComponentType;
+ (BOOL)isValid:(id)a0;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addFeedbackComponent:(id)a0;
- (unsigned long long)feedbackComponentsCount;
- (void)clearFeedbackComponents;
- (id)feedbackComponentAtIndex:(unsigned long long)a0;
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
