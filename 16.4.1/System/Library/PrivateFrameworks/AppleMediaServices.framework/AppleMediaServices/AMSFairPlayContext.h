@interface AMSFairPlayContext : NSObject

@property (nonatomic) unsigned int contextID;

- (void)dealloc;
- (id)init;
- (void)destroyContext;
- (unsigned int)fairplayContextIDWithError:(id *)a0;

@end
