@interface AKGlobalConfig : NSObject

+ (id)sharedInstance;

- (void)fetchGlobalConfigUsingCachePolicy:(unsigned long long)a0 completion:(id /* block */)a1;

@end
