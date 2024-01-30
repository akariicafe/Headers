@class NSObject;
@protocol OS_dispatch_queue;

@interface HAPCharacteristicEnableEventCompletionTuple : HMFObject

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

+ (id)enableEventCompletionTupleWithHandler:(id /* block */)a0 queue:(id)a1;

- (void).cxx_destruct;

@end
