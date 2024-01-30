@interface MCPowerAssertion : MCProcessAssertion

@property (readonly, nonatomic, getter=isParked) BOOL parked;

- (void)park;
- (void)unpark;
- (void)dealloc;
- (id)initWithReason:(id)a0;

@end
