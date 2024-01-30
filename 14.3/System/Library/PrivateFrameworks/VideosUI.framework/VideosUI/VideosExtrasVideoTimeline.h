@class NSArray;

@interface VideosExtrasVideoTimeline : NSObject {
    NSArray *_timelineElements;
}

@property (readonly, nonatomic) NSArray *events;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTimelineElements:(id)a0;
- (id)eventForTime:(double)a0;

@end
