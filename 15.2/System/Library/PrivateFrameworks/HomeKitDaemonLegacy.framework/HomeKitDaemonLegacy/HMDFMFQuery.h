@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDFMFQuery : HMFObject

@property (readonly, copy, nonatomic) NSString *queryID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (readonly, nonatomic) id /* block */ completion;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResponseQueue:(id)a0 completion:(id /* block */)a1;

@end
