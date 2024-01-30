@class MTRBaseDevice, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRIdentifyDevice : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) MTRBaseDevice *baseDevice;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_childNodesWithIdentifyForEndpoint:(unsigned short)a0 completionHandler:(id /* block */)a1;
- (void)_identifyClusterPresentAtEndpoint:(unsigned short)a0 completionHandler:(id /* block */)a1;
- (void)_issueIdentifyCommand:(unsigned short)a0 completionHandler:(id /* block */)a1;
- (void)_validIdentifyNodeForParentAtEndpoint:(unsigned short)a0 completionHandler:(id /* block */)a1;
- (void)identifyWithEndpoint:(unsigned short)a0 completionHandler:(id /* block */)a1;
- (id)initWithBaseDevice:(id)a0 queue:(id)a1;

@end
