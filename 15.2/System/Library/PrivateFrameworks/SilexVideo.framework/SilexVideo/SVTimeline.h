@class NSMutableArray;

@interface SVTimeline : NSObject {
    double _duration;
    double _time;
    NSMutableArray *_actions;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
