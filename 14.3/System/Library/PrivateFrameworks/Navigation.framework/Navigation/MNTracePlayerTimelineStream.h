@class NSArray;

@interface MNTracePlayerTimelineStream : NSObject {
    NSArray *_data;
}

@property (copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) unsigned long long nextIndex;
@property (readonly, nonatomic) double nextUpdatePosition;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)jumpToPosition:(double)a0;
- (void)triggerNextUpdate;

@end
