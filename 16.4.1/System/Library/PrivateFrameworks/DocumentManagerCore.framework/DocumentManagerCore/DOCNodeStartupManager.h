@interface DOCNodeStartupManager : NSObject

@property (class, readonly) DOCNodeStartupManager *shared;

@property (nonatomic) BOOL isStarted;

- (void)_start;
- (void)startIfNeeded;

@end
