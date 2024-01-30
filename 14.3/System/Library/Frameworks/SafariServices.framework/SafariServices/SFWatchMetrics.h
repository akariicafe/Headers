@interface SFWatchMetrics : NSObject

@property (class, readonly, nonatomic) SFWatchMetrics *currentMetrics;

@property (readonly, nonatomic) double minimumFontScaleFactor;
@property (readonly, nonatomic) double closeButtonTopToBaselineSpacing;
@property (readonly, nonatomic) double headerButtonFontPointSize;
@property (readonly, nonatomic) double headerButtonPadding;

- (id)init;

@end
