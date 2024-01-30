@class HMCRedirector;

@interface HMCPartition : HMFObject

@property (readonly) HMCRedirector *redirections;

- (BOOL)modelBelongsToThisPartition:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
