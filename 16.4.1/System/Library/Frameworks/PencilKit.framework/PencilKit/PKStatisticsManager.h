@class NSString, NSDictionary;
@protocol PKDrawingPaletteStatistics;

@interface PKStatisticsManager : NSObject {
    NSString *_recentShapeCreated;
    double _latestShapeCreatedTimestamp;
    NSDictionary *_recentTextLinesStraightened;
    double _latestTextLinesStraightenedTimestamp;
    id<PKDrawingPaletteStatistics> _drawingPaletteStatistics;
}

- (void).cxx_destruct;

@end
