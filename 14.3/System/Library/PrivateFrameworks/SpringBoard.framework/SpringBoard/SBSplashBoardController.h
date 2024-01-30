@interface SBSplashBoardController : XBApplicationController {
    BOOL _isObservingAppLanguageChanges;
}

- (void)dealloc;
- (void)configureForLocaleChanges;
- (void)_observeLocaleChanges;
- (void)_checkForChangedLocale;
- (id)_splashBoardApplicationForBundleID:(id)a0;
- (void)_handleLocaleDidChangeNotification;

@end
