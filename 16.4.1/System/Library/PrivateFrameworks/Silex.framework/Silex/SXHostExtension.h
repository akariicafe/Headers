@class NSString, NSExtensionContext;

@interface SXHostExtension : NSObject <SXHost>

@property (weak, nonatomic) NSExtensionContext *extensionContext;
@property (nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canOpenURL:(id)a0;
- (id)initWithExtensionContext:(id)a0;
- (void).cxx_destruct;
- (void)openURL:(id)a0 completion:(id /* block */)a1;
- (void)extensionHostDidBecomeActive:(id)a0;
- (void)extensionHostDidEnterBackground:(id)a0;
- (void)extensionHostWillEnterForeground:(id)a0;

@end
