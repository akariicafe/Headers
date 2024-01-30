@interface BWSourceNode : BWNode

@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;

- (void)makeOutputsLiveIfNeeded;
- (id)nodeType;
- (BOOL)start:(id *)a0;
- (BOOL)stop:(id *)a0;

@end
