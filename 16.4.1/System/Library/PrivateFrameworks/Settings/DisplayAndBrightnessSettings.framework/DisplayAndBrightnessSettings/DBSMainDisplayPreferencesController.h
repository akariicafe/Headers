@class NSString, DBSZoomAndProSpecifiers;

@interface DBSMainDisplayPreferencesController : PSListController <DBSZoomAndProSpecifiersDelegate> {
    BOOL _isProMode;
}

@property (retain, nonatomic) DBSZoomAndProSpecifiers *_zoomAndProSpecifierVendor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)getProModeEnabled;
- (void)presentModalFineTuneController;
- (void)presentModalMagnifyController;
- (BOOL)proModeSupported;
- (void)setProModeEnabled:(BOOL)a0;

@end
