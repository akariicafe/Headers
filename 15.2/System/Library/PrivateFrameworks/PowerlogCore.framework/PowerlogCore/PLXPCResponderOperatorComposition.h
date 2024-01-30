@class PLOperator, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLXPCResponderOperatorComposition : NSObject

@property (weak) PLOperator *operator;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSDictionary *registration;
@property (copy, nonatomic) id /* block */ operatorBlock;

- (id)description;
- (id)respondToRequestForClientID:(short)a0 withProcessName:(id)a1 withKey:(id)a2 withPayload:(id)a3;
- (void).cxx_destruct;
- (id)initWithOperator:(id)a0 withRegistration:(id)a1 withBlock:(id /* block */)a2;
- (id)initWithWorkQueue:(id)a0 withRegistration:(id)a1 withBlock:(id /* block */)a2;

@end
