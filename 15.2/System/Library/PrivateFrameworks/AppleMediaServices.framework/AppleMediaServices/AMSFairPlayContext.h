@interface AMSFairPlayContext : NSObject

@property (nonatomic) unsigned int contextID;

- (id)init;
- (void)destroyContext;
- (unsigned int)fairplayContextIDWithError:(id *)a0;
- (void)dealloc;

@end
