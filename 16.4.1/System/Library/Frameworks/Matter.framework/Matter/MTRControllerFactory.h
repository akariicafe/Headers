@interface MTRControllerFactory : NSObject

@property (readonly, nonatomic) BOOL isRunning;

+ (id)sharedInstance;

- (void)shutdown;
- (id)startControllerOnExistingFabric:(id)a0;
- (id)startControllerOnNewFabric:(id)a0;
- (BOOL)startup:(id)a0;

@end
