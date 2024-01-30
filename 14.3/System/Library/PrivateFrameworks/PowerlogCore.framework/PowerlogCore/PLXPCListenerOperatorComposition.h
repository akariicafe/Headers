@class PLOperator, NSDictionary;

@interface PLXPCListenerOperatorComposition : NSObject

@property (weak) PLOperator *operator;
@property (readonly) NSDictionary *registration;
@property (copy, nonatomic) id /* block */ operatorBlock;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOperator:(id)a0 withRegistration:(id)a1 withBlock:(id /* block */)a2;
- (void)messageRecievedForClientID:(short)a0 withProcessName:(id)a1 withKey:(id)a2 withPayload:(id)a3;

@end
