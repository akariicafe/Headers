@class NSString;

@interface ATXMPBAnchorModelEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char engagementType : 1; unsigned char numPredictionsforAnchor : 1; unsigned char secondsAfterAnchor : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAnchorType;
@property (retain, nonatomic) NSString *anchorType;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) BOOL hasCandidateType;
@property (retain, nonatomic) NSString *candidateType;
@property (nonatomic) BOOL hasSecondsAfterAnchor;
@property (nonatomic) unsigned int secondsAfterAnchor;
@property (nonatomic) BOOL hasNumPredictionsforAnchor;
@property (nonatomic) unsigned int numPredictionsforAnchor;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) int engagementType;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasExecutableObject;
@property (retain, nonatomic) NSString *executableObject;

- (int)StringAsEngagementType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)engagementTypeAsString:(int)a0;

@end
