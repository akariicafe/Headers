@interface UIRuntimeEventConnection : UIRuntimeConnection

@property unsigned long long eventMask;
@property (readonly) SEL action;
@property (readonly) id target;

- (void)connect;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)connectForSimulator;

@end
