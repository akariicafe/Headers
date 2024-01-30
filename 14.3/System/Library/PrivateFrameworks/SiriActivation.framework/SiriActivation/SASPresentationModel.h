@class NSTimer, SASPresentationServer, NSMutableArray;

@interface SASPresentationModel : NSObject

@property (readonly, nonatomic) SASPresentationServer *presentationServer;
@property (nonatomic) long long requestState;
@property (retain, nonatomic) NSMutableArray *enqueuedButtonEventCompletions;
@property (retain, nonatomic) NSTimer *pingTimer;

- (void).cxx_destruct;
- (id)initWithPresentationServer:(id)a0;
- (void)flushEnqueuedButtonEventCompletions;

@end
