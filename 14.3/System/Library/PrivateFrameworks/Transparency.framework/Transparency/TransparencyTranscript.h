@class NSString, NSMutableArray;

@interface TransparencyTranscript : NSObject

@property (retain) NSString *context;
@property (retain) NSMutableArray *events;

- (id)initWithContext:(id)a0;
- (id)serialize;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (void)startEvent:(id)a0;
- (void)stopEventWithSuccess:(id)a0;
- (void)stopEventWithFailure:(id)a0 error:(id)a1;

@end
