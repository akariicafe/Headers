@class NSOperationQueue;
@protocol HMMLogEventSubmitting;

@interface HMDMPCSessionController : HMFObject

@property (readonly, nonatomic) NSOperationQueue *speakerGroupCommandOperationQueue;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;

- (void).cxx_destruct;
- (id)initWithLogEventSubmitter:(id)a0;
- (void)executeSessionWithSessionData:(id)a0 completion:(id /* block */)a1;

@end
