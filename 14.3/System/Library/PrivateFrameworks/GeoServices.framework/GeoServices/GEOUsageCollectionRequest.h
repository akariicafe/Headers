@class GEOABExperimentAssignment, NSMutableArray, PBDataReader;

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_abExperimentAssignments;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    NSMutableArray *_timeToLeaveHypothesisFeedbackCollections;
    NSMutableArray *_timeToLeaveInitialTravelTimeFeedbackCollections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_abExperimentAssignments : 1; unsigned char read_tilesAbExperimentAssignment : 1; unsigned char read_timeToLeaveHypothesisFeedbackCollections : 1; unsigned char read_timeToLeaveInitialTravelTimeFeedbackCollections : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *abExperimentAssignments;
@property (retain, nonatomic) NSMutableArray *timeToLeaveHypothesisFeedbackCollections;
@property (retain, nonatomic) NSMutableArray *timeToLeaveInitialTravelTimeFeedbackCollections;
@property (readonly, nonatomic) BOOL hasTilesAbExperimentAssignment;
@property (retain, nonatomic) GEOABExperimentAssignment *tilesAbExperimentAssignment;

+ (Class)abExperimentAssignmentType;
+ (Class)timeToLeaveHypothesisFeedbackCollectionType;
+ (Class)timeToLeaveInitialTravelTimeFeedbackCollectionType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (Class)responseClass;
- (id)init;
- (unsigned int)requestTypeCode;
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
- (id)initWithDictionary:(id)a0;
- (void)addAbExperimentAssignment:(id)a0;
- (void)clearAbExperimentAssignments;
- (void)addTimeToLeaveHypothesisFeedbackCollection:(id)a0;
- (id)abExperimentAssignmentAtIndex:(unsigned long long)a0;
- (void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)a0;
- (unsigned long long)abExperimentAssignmentsCount;
- (unsigned long long)timeToLeaveHypothesisFeedbackCollectionsCount;
- (void)clearTimeToLeaveHypothesisFeedbackCollections;
- (id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned long long)a0;
- (unsigned long long)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
- (void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
- (id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned long long)a0;

@end
