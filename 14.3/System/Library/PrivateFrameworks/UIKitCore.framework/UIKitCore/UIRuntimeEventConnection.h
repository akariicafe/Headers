@interface UIRuntimeEventConnection : UIRuntimeConnection

@property unsigned long long eventMask;
@property (readonly) SEL action;
@property (readonly) id target;

- (void)connect;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)connectForSimulator;
- (void)encodeWithCoder:(id)a0;

@end
