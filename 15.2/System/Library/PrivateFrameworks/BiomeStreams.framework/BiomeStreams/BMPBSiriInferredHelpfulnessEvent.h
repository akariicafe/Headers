@class NSString;

@interface BMPBSiriInferredHelpfulnessEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char inferredHelpfulnessScore : 1; unsigned char restatementScore : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasInferredHelpfulnessScore;
@property (nonatomic) double inferredHelpfulnessScore;
@property (nonatomic) BOOL hasRestatementScore;
@property (nonatomic) double restatementScore;
@property (readonly, nonatomic) BOOL hasTurnID;
@property (retain, nonatomic) NSString *turnID;
@property (readonly, nonatomic) BOOL hasModelID;
@property (retain, nonatomic) NSString *modelID;

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
