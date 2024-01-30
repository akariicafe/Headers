@class LSApplicationRecord, NSArray, NSURL, CTCellularPlanManagerCameraScanAction, CoreTelephonyClient;

@interface BCSURLAction : BCSAction {
    NSArray *_appLinks;
    LSApplicationRecord *_userVisibleAppRecord;
    NSArray *_upiApplicationRecords;
    BOOL _deviceDataIsUnavailable;
    NSURL *_appStoreSearchURLForUnsupportedScheme;
    CoreTelephonyClient *_coreTelephonyClient;
    CTCellularPlanManagerCameraScanAction *_cellularPlanAction;
}

@property (readonly, nonatomic) LSApplicationRecord *targetApplication;
@property (readonly, nonatomic) BOOL mustOpenAppLinkInApp;
@property (readonly, nonatomic) unsigned long long appLinkCount;
@property (readonly, nonatomic) BOOL hasPreferredAppLink;

- (id)shortDescription;
- (id)url;
- (void).cxx_destruct;
- (id)appLinks;
- (void)performAction;
- (void)performDefaultAction;
- (id)urlThatCanBeOpened;
- (id)actionPickerItems;
- (id)localizedDefaultActionDescription;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)menuElements;
- (id)contentPreviewString;
- (unsigned long long)menuElementsCount;
- (id)actionIcon;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)a0;
- (id)debugDescriptionExtraInfoDictionary;
- (void)performActionWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)localizedDefaultActionTitle;
- (BOOL)shouldRequireUserToPickTargetApp;
- (BOOL)hasSensitiveURL;
- (BOOL)isAMSAction;
- (void)performDefaultActionWithFBOptions:(id)a0;
- (id)preferredBundleID;
- (BOOL)_hasCellularPlanAction;
- (id)_actionDescriptionForURL:(id)a0 application:(id)a1 shouldShowHostNameForSafariURL:(BOOL)a2;
- (id)_actionDescriptionWithoutTargetApplicationForURL:(id)a0;
- (BOOL)_willOpenInSafari;
- (id)_commonActionPickerItemsForURL;
- (id)_additionalActionPickerItems;
- (id)_actionPickerItemsForAppClip;
- (id)_actionPickerItemsForLockScreenVisibleApps;
- (id)_actionPickerItemsForUnlockedAppLinks;
- (id)_appclipLaunchReason;
- (BOOL)_isVisualCode;
- (BOOL)_tryDetermineActionabilityForSpecialCodesFromQRScannerWithCompletionHandler:(id /* block */)a0;
- (void)_resolveTargetApplicationForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_resolveAppClipForURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isCodeFromQRScanner;
- (BOOL)_shouldOpenInAppForAppLink:(id)a0;
- (BOOL)_shouldBlockHandlingURL:(id)a0;
- (void)_queryApplicationRecordForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)_actionDescriptionForAppClip;
- (id)_menuElementForActionPicker:(id)a0;

@end
