@class SASPresentationState, NSTimer, NSMutableArray, SASPresentationServer;

@interface SASPresentationModel : NSObject

@property (readonly, nonatomic) SASPresentationServer *presentationServer;
@property (nonatomic) long long requestState;
@property (retain, nonatomic) NSMutableArray *enqueuedButtonEventCompletions;
@property (retain, nonatomic) NSTimer *pingTimer;
@property (retain, nonatomic) SASPresentationState *presentationState;

- (id)initWithPresentationServer:(id)a0;
- (void)flushEnqueuedButtonEventCompletions;
- (void).cxx_destruct;

@end
