@interface CSSiriFanInfoManager : NSObject

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)getCurrentFanInfo:(id /* block */)a0;

@end
