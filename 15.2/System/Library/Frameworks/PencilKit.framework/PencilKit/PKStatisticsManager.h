@class NSString;
@protocol PKDrawingPaletteStatistics;

@interface PKStatisticsManager : NSObject {
    NSString *_recentShapeCreated;
    double _latestShapeCreatedTimestamp;
    id<PKDrawingPaletteStatistics> _drawingPaletteStatistics;
}

- (void).cxx_destruct;

@end
