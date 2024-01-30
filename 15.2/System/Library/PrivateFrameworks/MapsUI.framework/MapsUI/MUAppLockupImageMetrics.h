@interface MUAppLockupImageMetrics : NSObject

@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) unsigned long long variant;

@end
