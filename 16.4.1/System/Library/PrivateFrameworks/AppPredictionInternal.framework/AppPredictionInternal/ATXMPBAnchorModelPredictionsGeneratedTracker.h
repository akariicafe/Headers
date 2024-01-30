@class NSString;

@interface ATXMPBAnchorModelPredictionsGeneratedTracker : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char secondsAfterAnchorEnd : 1; unsigned char secondsAfterAnchorStart : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAnchorType;
@property (retain, nonatomic) NSString *anchorType;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) BOOL hasCandidateType;
@property (retain, nonatomic) NSString *candidateType;
@property (nonatomic) BOOL hasSecondsAfterAnchorStart;
@property (nonatomic) int secondsAfterAnchorStart;
@property (nonatomic) BOOL hasSecondsAfterAnchorEnd;
@property (nonatomic) int secondsAfterAnchorEnd;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasExecutableObject;
@property (retain, nonatomic) NSString *executableObject;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
