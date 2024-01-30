@class NSString, NSMutableArray;

@interface TransparencyTranscript : NSObject

@property (retain) NSString *context;
@property (retain) NSMutableArray *_events;

- (void)startEvent:(id)a0;
- (void)stopEventWithFailure:(id)a0 error:(id)a1;
- (id)initWithContext:(id)a0;
- (id)serialize;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (void)stopEventWithSuccess:(id)a0;

@end
