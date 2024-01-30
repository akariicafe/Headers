@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackIdLookupResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackInfos;
}

@property (retain, nonatomic) NSMutableArray *feedbackInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)feedbackInfoType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addFeedbackInfo:(id)a0;
- (unsigned long long)feedbackInfosCount;
- (void)clearFeedbackInfos;
- (id)feedbackInfoAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
