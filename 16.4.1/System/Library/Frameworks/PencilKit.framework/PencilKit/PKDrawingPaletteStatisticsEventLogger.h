@class NSString;

@interface PKDrawingPaletteStatisticsEventLogger : NSObject <PKDrawingPaletteStatistics>

@property (nonatomic) double lastHandwritingToolUsedOverDrawingAttachmentTimestamp;
@property (nonatomic) double lastInkingToolUsedOverNonDrawingAttachmentTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordHandwritingToolSelected;
- (void)recordHandwritingToolUsedOverDrawingAttachmentWithTimestamp:(double)a0;
- (void)recordInkingToolUsedOverNonDrawingAttachmentWithTimestamp:(double)a0;

@end
