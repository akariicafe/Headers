@class NSDictionary, VCEmulatedOutputQueue;

@interface VCEmulatedNetwork : NSObject {
    NSDictionary *_policies;
    VCEmulatedOutputQueue *_outputQueue;
}

@property (readonly, nonatomic) unsigned int numberOfPacketsWaitingInOutputQueue;
@property (copy, nonatomic) id /* block */ pushCompletionHandler;
@property (copy, nonatomic) id /* block */ popCompletionHandler;

- (id)initWithPolicies:(id)a0;
- (void)dealloc;
- (void)push:(id)a0;
- (id)copyPacketFromPop;
- (void)runUntilTime:(double)a0;

@end
