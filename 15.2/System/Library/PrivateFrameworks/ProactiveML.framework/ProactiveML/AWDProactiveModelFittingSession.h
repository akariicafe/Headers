@class AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingSession : PBCodable <NSCopying> {
    struct { unsigned char label : 1; unsigned char supervisionType : 1; unsigned char timestamp : 1; unsigned char confidenceScore : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) unsigned long long label;
@property (readonly, nonatomic) BOOL hasSparseFloatFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures;
@property (nonatomic) BOOL hasSupervisionType;
@property (nonatomic) unsigned long long supervisionType;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) float confidenceScore;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
