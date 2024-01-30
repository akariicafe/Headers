@class NSString, CNContact, NSArray, DDScannerResult, DDUIAction, UIMenu;

@interface BCSDataDetectorsSupportedAction : BCSAction <BCSActionDelegate> {
    NSArray *_actions;
    UIMenu *_ddUIMenu;
    DDUIAction *_defaultDDAction;
}

@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *icsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shortDescription;
- (id)url;
- (void).cxx_destruct;
- (void)performAction;
- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)localizedDefaultActionDescription;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)menuElements;
- (id)contentPreviewString;
- (unsigned long long)menuElementsCount;
- (id)actionIcon;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)a0;
- (id)localizedActionDescription;
- (id)debugDescriptionExtraInfoDictionary;
- (void)_performActionAndShowActionPickerIfNeeded:(BOOL)a0;
- (id)_actionStringsArray;
- (void)_setUpActionMenuIfNeeded;
- (id)_hostingViewForAction;

@end
