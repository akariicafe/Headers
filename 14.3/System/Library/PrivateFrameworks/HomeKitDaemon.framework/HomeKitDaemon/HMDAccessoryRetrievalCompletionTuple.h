@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryRetrievalCompletionTuple : HMFObject

@property (nonatomic) long long linkType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ completion;

+ (id)tupleWithLinkType:(long long)a0 queue:(id)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;

@end
