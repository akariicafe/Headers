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

- (int)position;
- (double)rotationAngle;
- (void)setRotationAngle:(double)a0;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0;
- (void)setShowValue:(BOOL)a0;
- (BOOL)isDeleted;
- (BOOL)isLabelVisible;
- (id)description;
- (void)setPosition:(int)a0;
- (void)setDeleted:(BOOL)a0;
- (id)graphicProperties;
- (unsigned long long)contentFormatId;
- (id)contentFormat;
- (BOOL)isShowValue;
- (void)setContentFormatId:(unsigned long long)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setIsContentFormatDerivedFromDataPoints:(BOOL)a0;
- (void)setContentFormat:(id)a0;
- (BOOL)isContentFormatDerivedFromDataPoints;
- (BOOL)isShowLeaderLines;
- (BOOL)hasLeaderLinesGraphics;
- (void)setShowLeaderLines:(BOOL)a0;
- (BOOL)isShowCategoryName;
- (void)setShowCategoryName:(BOOL)a0;
- (BOOL)isShowSeriesName;
- (void)setShowSeriesName:(BOOL)a0;
- (BOOL)isShowPercent;
- (void)setShowPercent:(BOOL)a0;
- (BOOL)isShowBubbleSize;
- (void)setShowBubbleSize:(BOOL)a0;
- (BOOL)isShowLegendKey;
- (void)setShowLegendKey:(BOOL)a0;
- (BOOL)isExtensionDetected;
- (void)setExtensionDetected:(BOOL)a0;
- (BOOL)isCustomLabelBlockingVisibility;
- (id)leaderlineGraphicProperties;
- (void)setLeaderlineGraphicProperties:(id)a0;
- (void)setIsPositionAffineTransform:(BOOL)a0;
- (BOOL)isPositionAffineTransform;

@end
