@class HMCRedirector;

@interface HMCPartition : HMFObject

@property (readonly) HMCRedirector *redirections;

- (void).cxx_destruct;
- (id)init;
- (BOOL)modelBelongsToThisPartition:(id)a0;

@end
