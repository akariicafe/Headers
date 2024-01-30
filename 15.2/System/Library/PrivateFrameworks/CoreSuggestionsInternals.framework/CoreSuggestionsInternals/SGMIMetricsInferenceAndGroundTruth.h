@class SGMIMetricsTrialMetadata, SGMIMetricsSubmodelsProbabilities, NSMutableArray;

@interface SGMIMetricsInferenceAndGroundTruth : PBCodable <NSCopying> {
    struct { unsigned char missingAttachmentPredictionPerformanceInMilliSeconds : 1; unsigned char missingRecipientPredictionPerformanceInMilliSeconds : 1; unsigned char saliencyPredictionPerformanceInMilliSeconds : 1; unsigned char predictedSaliency : 1; unsigned char predictedSaliencyScore : 1; unsigned char estimatedGroundTruth : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTrialMetadata;
@property (retain, nonatomic) SGMIMetricsTrialMetadata *trialMetadata;
@property (readonly, nonatomic) BOOL hasSubmodelsProbabilities;
@property (retain, nonatomic) SGMIMetricsSubmodelsProbabilities *submodelsProbabilities;
@property (nonatomic) BOOL hasPredictedSaliencyScore;
@property (nonatomic) float predictedSaliencyScore;
@property (nonatomic) BOOL hasPredictedSaliency;
@property (nonatomic) int predictedSaliency;
@property (nonatomic) BOOL hasSaliencyPredictionPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long saliencyPredictionPerformanceInMilliSeconds;
@property (nonatomic) BOOL hasEstimatedGroundTruth;
@property (nonatomic) BOOL estimatedGroundTruth;
@property (retain, nonatomic) NSMutableArray *missingAttachments;
@property (nonatomic) BOOL hasMissingAttachmentPredictionPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long missingAttachmentPredictionPerformanceInMilliSeconds;
@property (retain, nonatomic) NSMutableArray *missingRecipients;
@property (nonatomic) BOOL hasMissingRecipientPredictionPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long missingRecipientPredictionPerformanceInMilliSeconds;

+ (Class)missingAttachmentType;
+ (Class)missingRecipientType;

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
- (id)predictedSaliencyAsString:(int)a0;
- (int)StringAsPredictedSaliency:(id)a0;
- (void)clearMissingAttachments;
- (void)addMissingAttachment:(id)a0;
- (unsigned long long)missingAttachmentsCount;
- (id)missingAttachmentAtIndex:(unsigned long long)a0;
- (void)clearMissingRecipients;
- (void)addMissingRecipient:(id)a0;
- (unsigned long long)missingRecipientsCount;
- (id)missingRecipientAtIndex:(unsigned long long)a0;

@end
