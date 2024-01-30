@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HAPBTLEReachabilityScanTuple : HMFObject

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *identifier;

+ (id)reachabilityScanTupleWithCompletion:(id /* block */)a0 workQueue:(id)a1 identifier:(id)a2;

- (void).cxx_destruct;

@end
