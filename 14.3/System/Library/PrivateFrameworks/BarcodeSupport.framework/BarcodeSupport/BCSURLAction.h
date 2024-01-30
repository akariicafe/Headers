@class LSApplicationRecord, NSArray, NSURL, CTCellularPlanManagerCameraScanAction, CoreTelephonyClient;

@interface BCSURLAction : BCSAction {
    NSArray *_appLinks;
    LSApplicationRecord *_applicationRecord;
    BOOL _deviceDataIsUnavailable;
    NSURL *_appStoreSearchURLForUnsupportedScheme;
    CoreTelephonyClient *_coreTelephonyClient;
    CTCellularPlanManagerCameraScanAction *_cellularPlanAction;
}

@property (readonly, nonatomic) LSApplicationRecord *targetApplication;
@property (readonly, nonatomic) BOOL mustOpenAppLinkInApp;
@property (readonly, nonatomic) unsigned long long appLinkCount;
@property (readonly, nonatomic) BOOL hasPreferredAppLink;

- (void)performAction;
- (void).cxx_destruct;
- (id)url;
- (id)urlThatCanBeOpened;
- (id)actionPickerItems;
- (id)appLinks;
- (void)performDefaultAction;
- (id)localizedDefaultActionDescription;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)a0;
- (id)debugDescriptionExtraInfoDictionary;
- (id)localizedDefaultActionTitle;
- (void)performDefaultActionWithFBOptions:(id)a0;
- (BOOL)_hasCellularPlanAction;
- (id)_actionDescriptionForURL:(id)a0 application:(id)a1 shouldShowHostNameForSafariURL:(BOOL)a2;
- (id)_actionDescriptionWithoutTargetApplicationForURL:(id)a0;
- (BOOL)_isVisualCode;
- (BOOL)_tryDetermineActionabilityForSpecialCodesFromQRScannerWithCompletionHandler:(id /* block */)a0;
- (void)_resolveTargetApplicationForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_resolveAppClipForURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isCodeFromQRScanner;
- (BOOL)_shouldOpenInAppForAppLink:(id)a0;
- (BOOL)_shouldBlockHandlingURL:(id)a0;
- (id)_actionDescriptionForAppClip;

@end
