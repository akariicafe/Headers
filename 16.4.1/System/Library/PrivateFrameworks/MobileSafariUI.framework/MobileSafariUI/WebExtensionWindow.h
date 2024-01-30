@class BrowserController, NSString, NSArray;
@protocol WBSWebExtensionTab;

@interface WebExtensionWindow : NSObject <WBSWebExtensionWindow>

@property (readonly, weak, nonatomic) BrowserController *browserController;
@property (nonatomic) BOOL isPrivateWindow;
@property (readonly, nonatomic) double idForWebExtensions;
@property (readonly, nonatomic) BOOL isFocused;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isPopupWindow;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } webExtensionWindowGeometry;
@property (readonly, copy, nonatomic) NSString *webExtensionWindowType;
@property (readonly, copy, nonatomic) NSString *webExtensionWindowState;
@property (readonly, copy, nonatomic) NSArray *webExtensionTabs;
@property (readonly, nonatomic) id<WBSWebExtensionTab> activeWebExtensionTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_webExtensionTabsWithoutCopying;
- (void)createNewTabAtIndex:(id)a0 url:(id)a1 makeActive:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)_isPrivateWithSingleTabShowingExplanationText;
- (void)validateToolbarItemForExtension:(id)a0;
- (id)initWithBrowserController:(id)a0 isPrivateWindow:(BOOL)a1;
- (void).cxx_destruct;

@end
