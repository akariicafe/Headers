@class NSData, NSMutableArray, PBDataReader;

@interface GEODirectionsFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_alightNotificationFeedbacks;
    NSData *_directionResponseID;
    NSMutableArray *_guidanceFeedbacks;
    NSMutableArray *_modalitys;
    NSMutableArray *_stepFeedbacks;
    NSMutableArray *_trafficRerouteFeedbacks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isCarplayConnected;
    struct { unsigned char has_isCarplayConnected : 1; unsigned char read_alightNotificationFeedbacks : 1; unsigned char read_directionResponseID : 1; unsigned char read_guidanceFeedbacks : 1; unsigned char read_modalitys : 1; unsigned char read_stepFeedbacks : 1; unsigned char read_trafficRerouteFeedbacks : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDirectionResponseID;
@property (retain, nonatomic) NSData *directionResponseID;
@property (retain, nonatomic) NSMutableArray *stepFeedbacks;
@property (retain, nonatomic) NSMutableArray *trafficRerouteFeedbacks;
@property (retain, nonatomic) NSMutableArray *alightNotificationFeedbacks;
@property (retain, nonatomic) NSMutableArray *guidanceFeedbacks;
@property (retain, nonatomic) NSMutableArray *modalitys;
@property (nonatomic) BOOL hasIsCarplayConnected;
@property (nonatomic) BOOL isCarplayConnected;

+ (BOOL)isValid:(id)a0;
+ (Class)alightNotificationFeedbackType;
+ (Class)guidanceFeedbackType;
+ (Class)modalityType;
+ (Class)stepFeedbackType;
+ (Class)trafficRerouteFeedbackType;

- (id)initWithData:(id)a0;
- (void)addAlightNotificationFeedback:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addStepFeedback:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addTrafficRerouteFeedback:(id)a0;
- (void).cxx_destruct;
- (void)addGuidanceFeedback:(id)a0;
- (void)addModality:(id)a0;
- (id)alightNotificationFeedbackAtIndex:(unsigned long long)a0;
- (unsigned long long)alightNotificationFeedbacksCount;
- (void)clearAlightNotificationFeedbacks;
- (void)clearGuidanceFeedbacks;
- (void)clearModalitys;
- (void)clearStepFeedbacks;
- (void)clearTrafficRerouteFeedbacks;
- (id)guidanceFeedbackAtIndex:(unsigned long long)a0;
- (unsigned long long)guidanceFeedbacksCount;
- (id)modalityAtIndex:(unsigned long long)a0;
- (unsigned long long)modalitysCount;
- (id)stepFeedbackAtIndex:(unsigned long long)a0;
- (unsigned long long)stepFeedbacksCount;
- (id)trafficRerouteFeedbackAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficRerouteFeedbacksCount;

@end
