@interface SBSplashBoardController : XBApplicationController {
    BOOL _isObservingAppLanguageChanges;
}

- (void)_checkForChangedLocale;
- (void)_handleLocaleDidChangeNotification;
- (void)dealloc;
- (void)_observeLocaleChanges;
- (id)_splashBoardApplicationForBundleID:(id)a0;
- (void)configureForLocaleChanges;

@end
