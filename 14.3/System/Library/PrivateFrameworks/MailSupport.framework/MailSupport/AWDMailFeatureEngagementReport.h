@interface AWDMailFeatureEngagementReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char feature : 1; unsigned char filterStatus : 1; unsigned char inView : 1; unsigned char interactionGesture : 1; unsigned char sourceType : 1; unsigned char fromSwipeMenu : 1; unsigned char includeAttachments : 1; unsigned char usedPrediction : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasFeature;
@property (nonatomic) int feature;
@property (nonatomic) BOOL hasSourceType;
@property (nonatomic) int sourceType;
@property (nonatomic) BOOL hasInteractionGesture;
@property (nonatomic) int interactionGesture;
@property (nonatomic) BOOL hasFilterStatus;
@property (nonatomic) int filterStatus;
@property (nonatomic) BOOL hasIncludeAttachments;
@property (nonatomic) BOOL includeAttachments;
@property (nonatomic) BOOL hasUsedPrediction;
@property (nonatomic) BOOL usedPrediction;
@property (nonatomic) BOOL hasFromSwipeMenu;
@property (nonatomic) BOOL fromSwipeMenu;
@property (nonatomic) BOOL hasInView;
@property (nonatomic) int inView;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)sourceTypeAsString:(int)a0;
- (int)StringAsSourceType:(id)a0;
- (id)featureAsString:(int)a0;
- (int)StringAsFeature:(id)a0;
- (id)interactionGestureAsString:(int)a0;
- (int)StringAsInteractionGesture:(id)a0;
- (id)filterStatusAsString:(int)a0;
- (int)StringAsFilterStatus:(id)a0;
- (id)inViewAsString:(int)a0;
- (int)StringAsInView:(id)a0;

@end
