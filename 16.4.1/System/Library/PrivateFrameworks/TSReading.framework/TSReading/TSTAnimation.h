@class TSTLayout;

@interface TSTAnimation : NSObject <NSCopying> {
    TSTLayout *mLayout;
    int mKind;
    struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; } *mCellRanges;
    unsigned long long mCellRangeCount;
    BOOL mByColumn;
    BOOL mByRow;
    BOOL mByCell;
    BOOL mByContent;
    BOOL mByCellRange;
    BOOL mByMissingCellRange;
    BOOL mReverse;
}

@property (readonly) unsigned long long stageCount;
@property (readonly) unsigned long long stage;
@property (readonly) BOOL final;
@property BOOL showsTableChrome;
@property BOOL showsOverlayLayers;
@property BOOL expandBackgroundFill;
@property BOOL drawsBlackAndWhite;
@property (readonly) unsigned long long cellRangeCount;
@property (readonly) BOOL drawTableName;
@property (readonly) BOOL drawTableBackground;
@property (readonly) BOOL drawCellBackground;
@property (readonly) BOOL drawCellContent;
@property (readonly) BOOL clipStrokes;
@property (readonly) BOOL drawStrokes;
@property (readonly) BOOL enabled;

+ (id)textureDeliveryStylesLocalized:(BOOL)a0;
+ (BOOL)deliveryStyleSupportedForExport:(unsigned long long)a0;
+ (id)newAnimationWithLayout:(id)a0 andCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1;
+ (id)newAnimationWithLayout:(id)a0 andDeliveryStyle:(unsigned long long)a1;
+ (unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)a0 andTable:(id)a1;
+ (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)clearCellRanges;
- (void)addCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })cellRangeAtIndex:(unsigned long long)a0;
- (void)setStage:(unsigned long long)a0 andFinal:(BOOL)a1;

@end
