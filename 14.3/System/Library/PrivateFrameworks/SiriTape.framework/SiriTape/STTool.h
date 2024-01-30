@interface STTool : NSObject

+ (id)settingsConnection;
+ (void)createProxyIfNeededAndSetActiveWithCompletion:(id /* block */)a0;
+ (void)clearCFcache;

@end
