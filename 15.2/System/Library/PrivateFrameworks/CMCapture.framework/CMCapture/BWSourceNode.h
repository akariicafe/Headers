@interface BWSourceNode : BWNode

@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;

- (BOOL)start:(id *)a0;
- (void)makeOutputsLiveIfNeeded;
- (id)nodeType;
- (BOOL)stop:(id *)a0;

@end
