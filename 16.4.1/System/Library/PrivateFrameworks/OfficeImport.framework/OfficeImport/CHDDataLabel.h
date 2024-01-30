@class EDString, EDResources, OADGraphicProperties;

@interface CHDDataLabel : NSObject {
    EDResources *mResources;
    unsigned long long mContentFormatId;
    int mPosition;
    BOOL mShowLeaderLines;
    BOOL mShowCategoryName;
    BOOL mShowSeriesName;
    BOOL mShowPercent;
    BOOL mShowBubbleSize;
    BOOL mShowValue;
    BOOL mShowLegendKey;
    BOOL mIsPositionAffineTransform;
    BOOL mContentFormatDerived;
    BOOL mDeleted;
    BOOL mExtensionDetected;
    double mRotation;
    OADGraphicProperties *mGraphicProperties;
    OADGraphicProperties *mLeaderlineGraphicProperties;
}

@property (retain, nonatomic) EDString *string;

+ (id)dataLabelWithResources:(id)a0;

- (void)setPosition:(int)a0;
- (void)setDeleted:(BOOL)a0;
- (void)setRotationAngle:(double)a0;
- (BOOL)isDeleted;
- (int)position;
- (void)setShowValue:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (double)rotationAngle;
- (id)initWithResources:(id)a0;
- (BOOL)isLabelVisible;
- (BOOL)isShowLegendKey;
- (void)setShowPercent:(BOOL)a0;
- (unsigned long long)contentFormatId;
- (BOOL)isCustomLabelBlockingVisibility;
- (void)setLeaderlineGraphicProperties:(id)a0;
- (id)contentFormat;
- (id)graphicProperties;
- (BOOL)hasLeaderLinesGraphics;
- (BOOL)isContentFormatDerivedFromDataPoints;
- (BOOL)isExtensionDetected;
- (BOOL)isPositionAffineTransform;
- (BOOL)isShowBubbleSize;
- (BOOL)isShowCategoryName;
- (BOOL)isShowLeaderLines;
- (BOOL)isShowPercent;
- (BOOL)isShowSeriesName;
- (BOOL)isShowValue;
- (id)leaderlineGraphicProperties;
- (void)setContentFormat:(id)a0;
- (void)setContentFormatId:(unsigned long long)a0;
- (void)setExtensionDetected:(BOOL)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setIsContentFormatDerivedFromDataPoints:(BOOL)a0;
- (void)setIsPositionAffineTransform:(BOOL)a0;
- (void)setShowBubbleSize:(BOOL)a0;
- (void)setShowCategoryName:(BOOL)a0;
- (void)setShowLeaderLines:(BOOL)a0;
- (void)setShowLegendKey:(BOOL)a0;
- (void)setShowSeriesName:(BOOL)a0;

@end
