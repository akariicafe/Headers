@class NSString;
@protocol PKDrawingPaletteStatistics;

@interface PKStatisticsManager : NSObject {
    NSString *_recentShapeCreated;
    double _latestShapeCreatedTimestamp;
}

@property (readonly, nonatomic) id<PKDrawingPaletteStatistics> drawingPaletteStatistics;

+ (id)sharedStatisticsManager;

- (void).cxx_destruct;
- (void)recordInsertSpaceWithType:(int)a0;
- (void)recordDragSelection;
- (void)recordDragAndDropSelection;
- (void)recordInkPickerNoOp:(id)a0;
- (void)recordShapeUndoIfNecessary;
- (void)recordBitmapEraseWithInputType:(long long)a0;
- (void)recordDrawStroke:(id)a0;
- (void)recordCreateShapeWithType:(long long)a0 fromMenu:(BOOL)a1 multiple:(BOOL)a2;
- (void)recordObjectEraseWithInputType:(long long)a0;
- (void)recordTool:(id)a0;
- (void)recordAutoMinimizeEnabledDidChange:(BOOL)a0 type:(unsigned long long)a1;
- (void)recordLatency:(float)a0 mean:(float)a1 max:(float)a2 percentageOverLatencyThreshold:(float)a3;
- (void)recordPerceivedLatency:(float)a0 mean:(float)a1 max:(float)a2;
- (void)recordToolAttributePopoverAppearedForTool:(id)a0 hadInteraction:(BOOL)a1;
- (void)recordSelectAllWithStrokeCount:(unsigned long long)a0;
- (void)recordCopyAsTextWithLength:(unsigned long long)a0 time:(double)a1 didShowHUD:(BOOL)a2 invokedFromSmartSelection:(BOOL)a3;
- (void)recordRulerInteractionEndedWithType:(unsigned long long)a0 angle:(double)a1;
- (void)recordPalettePositionChange:(long long)a0 type:(unsigned long long)a1;
- (void)recordPixelObjectEraseModeChange:(long long)a0;
- (void)recordShowRuler;
- (void)recordShapeEventWithType:(id)a0 modeString:(id)a1;
- (void)recordDoubleTapAction:(long long)a0;
- (void)recordColorPanelInvoked:(id)a0;
- (void)recordColorsChangedBeforeChosen:(long long)a0;
- (void)recordCollaboration:(unsigned long long)a0;
- (void)recordInsertSpaceAddWhitespace:(BOOL)a0;
- (void)recordJumpToSettings;
- (void)recordDrawWithFingerToggle:(BOOL)a0;
- (void)recordDataDetectorItemAdd:(id)a0;
- (void)recordDataDetectorItemRemove:(id)a0;
- (void)recordDataDetectorItemDefaultAction:(id)a0;
- (void)recordDataDetectorItemMenuAction:(id)a0;

@end
