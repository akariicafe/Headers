@class NSError, TLTimeline;

@interface TLTimelineSetupOperation : TLTimelineOperation

@property (retain) TLTimeline *timeline;
@property (retain) NSError *setupError;
@property (copy) id /* block */ operationCompletionBlock;
@property (copy) id /* block */ timelineOperationCompletionBlock;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) unsigned long long entryLimit;

+ (unsigned long long)relativePriority;

- (void)main;
- (void).cxx_destruct;
- (id)error;
- (id)initWithIdentifiable:(id)a0 timeout:(double)a1 entryLimit:(unsigned long long)a2;
- (id)initWithIdentifiable:(id)a0;

@end
