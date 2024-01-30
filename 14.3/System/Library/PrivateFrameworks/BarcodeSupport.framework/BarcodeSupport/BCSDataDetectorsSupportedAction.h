@class NSString, CNContact, NSArray, DDScannerResult;

@interface BCSDataDetectorsSupportedAction : BCSAction <BCSActionDelegate> {
    NSArray *_actions;
}

@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *icsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performAction;
- (void).cxx_destruct;
- (id)url;
- (id)actionPickerItems;
- (void)performDefaultAction;
- (id)localizedDefaultActionDescription;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)a0;
- (id)localizedActionDescription;
- (id)debugDescriptionExtraInfoDictionary;
- (void)_performActionAndShowActionPickerIfNeeded:(BOOL)a0;
- (id)_actionStringsArray;

@end
