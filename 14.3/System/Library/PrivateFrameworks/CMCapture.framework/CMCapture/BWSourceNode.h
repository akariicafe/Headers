@interface BWSourceNode : BWNode

@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;

- (BOOL)start:(id *)a0;
- (id)nodeType;
- (BOOL)stop:(id *)a0;
- (void)makeOutputsLiveIfNeeded;

@end
