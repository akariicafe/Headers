@class NSString, CADisplayMode;

@interface CADisplayProperties : NSObject {
    CADisplayMode *_currentMode;
    NSString *_overscanAdjustment;
    unsigned int _connectionSeed;
}

@property (retain, nonatomic) CADisplayMode *currentMode;
@property (copy, nonatomic) NSString *overscanAdjustment;
@property (nonatomic) unsigned int connectionSeed;

- (void)dealloc;

@end
