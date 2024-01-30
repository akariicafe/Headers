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

- (void).cxx_destruct;
- (void)stopWithFrameCount:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)outputData;
- (id)getObjectForKey:(id)a0;
- (void)startWithFrameCount:(id)a0;
- (id)initWithName:(id)a0 metrics:(id)a1;

@end
