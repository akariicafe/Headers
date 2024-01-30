@interface MCPowerAssertion : MCProcessAssertion

@property (readonly, nonatomic, getter=isParked) BOOL parked;

- (id)initWithReason:(id)a0;
- (void)dealloc;
- (void)unpark;
- (void)park;

@end
