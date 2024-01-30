@class NSMutableArray;

@interface SXTimeline : NSObject {
    double _duration;
    double _time;
    NSMutableArray *_actions;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
