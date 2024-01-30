@interface CSSiriFanInfoManager : NSObject

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)getCurrentFanInfo:(id /* block */)a0;

@end
