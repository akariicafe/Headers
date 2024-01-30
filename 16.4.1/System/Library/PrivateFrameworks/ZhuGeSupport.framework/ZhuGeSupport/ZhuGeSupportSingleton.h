@interface ZhuGeSupportSingleton : NSObject

+ (id)sharedInstance;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)initData;

@end
