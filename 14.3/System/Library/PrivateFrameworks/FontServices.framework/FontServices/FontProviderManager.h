@class NSXPCConnection;

@interface FontProviderManager : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedManager;
+ (void)registerFonts:(id)a0 enabled:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)unregisterFonts:(id)a0 completionHandler:(id /* block */)a1;
+ (id)registeredFontsInfo:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_registerFonts:(id)a0 enabled:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)normalizeURLs:(id)a0;
- (void)_unregisterFonts:(id)a0 completionHandler:(id /* block */)a1;
- (id)registeredFontsInfo:(BOOL)a0;

@end
