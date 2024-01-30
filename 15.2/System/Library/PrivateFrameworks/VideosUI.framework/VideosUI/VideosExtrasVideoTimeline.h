@class NSArray;

@interface VideosExtrasVideoTimeline : NSObject {
    NSArray *_timelineElements;
}

@property (readonly, nonatomic) NSArray *events;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTimelineElements:(id)a0;
- (id)eventForTime:(double)a0;

@end
