@class NSMutableArray;

@interface SVTimeline : NSObject {
    double _duration;
    double _time;
    NSMutableArray *_actions;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
