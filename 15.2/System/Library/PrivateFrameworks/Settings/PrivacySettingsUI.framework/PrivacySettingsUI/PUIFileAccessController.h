@class FPAccessControlManager;

@interface PUIFileAccessController : PSListController

@property (nonatomic) BOOL isAccess;
@property (retain, nonatomic) FPAccessControlManager *accessManager;

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)setAccess:(id)a0 forSpecifier:(id)a1;
- (id)accesssForSpecifier:(id)a0;
- (id)applicationProxiesDictionary;
- (id)bundleIdentifiersAccessingFiles;
- (void)setCameraAccess:(id)a0 forSpecifier:(id)a1;
- (id)cameraAccessForSpecifier:(id)a0;

@end
