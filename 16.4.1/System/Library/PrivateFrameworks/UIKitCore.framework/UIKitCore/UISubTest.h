@class NSString, NSMutableDictionary, NSNumber, NSMutableArray;

@interface UISubTest : NSObject {
    NSNumber *_startFrame;
    NSMutableArray *_time;
    NSMutableArray *_fps;
    NSString *_testName;
    BOOL _showTime;
    BOOL _showFps;
    NSMutableDictionary *_data;
}

@property (readonly) NSNumber *startTime;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)getObjectForKey:(id)a0;
- (void)stopWithFrameCount:(id)a0;
- (id)outputData;
- (id)initWithName:(id)a0 metrics:(id)a1;
- (void).cxx_destruct;
- (void)startWithFrameCount:(id)a0;

@end
