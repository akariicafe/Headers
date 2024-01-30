@class NSObject;
@protocol OS_dispatch_queue;

@interface HAPCharacteristicReadCompletionTuple : HMFObject

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

+ (id)readCompletionTupleWithHandler:(id /* block */)a0 queue:(id)a1;

- (void).cxx_destruct;

@end
