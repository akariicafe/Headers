@class NSString, _SFFormMetadataController, _WKRemoteObjectInterface, WKWebProcessPlugInScriptWorld;

@interface _SFWebProcessPlugInAutoFillPageController : _SFWebProcessPlugInPageController <SFFormAutoFiller, SFInjectedJavaScriptWebProcessController> {
    _WKRemoteObjectInterface *_activityControllerInterface;
    _WKRemoteObjectInterface *_autoFillerInterface;
    WKWebProcessPlugInScriptWorld *_isolatedWorld;
}

@property (retain, nonatomic) _SFFormMetadataController *formMetadataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFormControls:(id)a0 areAutoFilled:(BOOL)a1 andClearField:(id)a2 inFrame:(id)a3;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)a0 withValue:(id)a1 shouldSubmit:(BOOL)a2;
- (void)annotateForm:(long long)a0 inFrame:(id)a1 withValues:(id)a2;
- (void)fillTextField:(id)a0 inFrame:(id)a1 withGeneratedPassword:(id)a2;
- (void)willDestroyBrowserContextController:(id)a0;
- (id)initWithPlugIn:(id)a0 contextController:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didRemoveFrameFromHierarchy:(id)a1;
- (void)autoFillForm:(long long)a0 inFrame:(id)a1 withGeneratedPassword:(id)a2;
- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)a0 didStartProvisionalLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didCommitLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didSameDocumentNavigation:(long long)a1 forFrame:(id)a2;
- (void)runJavaScriptForActivity:(id)a0 withScript:(id)a1 object:(id)a2 invokeMethod:(id)a3 completionHandler:(id /* block */)a4;
- (void)autoFillFormSynchronouslyInFrame:(id)a0 withValues:(id)a1;
- (void)focusFormForStreamlinedLogin:(long long)a0 inFrame:(id)a1;
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)a0 passwordControlUniqueIDs:(id)a1;
- (void)automaticPasswordSheetDimissedInFrame:(id)a0 focusedPasswordControlUniqueID:(id)a1;
- (void)autoFillFormAsynchronouslyInFrame:(id)a0 withValues:(id)a1 setAutoFilled:(BOOL)a2 selectFieldAfterFilling:(id)a3;
- (void)autoFillFormAsynchronouslyInFrame:(id)a0 withValues:(id)a1 setAutoFilled:(BOOL)a2 focusFieldAfterFilling:(BOOL)a3 fieldToFocus:(id)a4;
- (void)autoFillFormAsynchronouslyInFrame:(id)a0 withValues:(id)a1 setAutoFilled:(BOOL)a2 focusFieldAfterFilling:(BOOL)a3 fieldToFocus:(id)a4 submitForm:(BOOL)a5;
- (void)collectURLsForPrefillingAtURL:(id)a0;
- (void)collectFormMetadataForPrefillingAtURL:(id)a0;
- (void)collectMetadataForTextField:(id)a0 inFrame:(id)a1 atURL:(id)a2 completionHandler:(id /* block */)a3;
- (void)collectFormMetadataForPageLevelAutoFillAtURL:(id)a0;
- (void)clearAutoFillMetadata;
- (void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)a0 formID:(long long)a1 focusedPasswordControlUniqueID:(id)a2 passwordControlUniqueIDs:(id)a3 automaticPassword:(id)a4 blurAfterSubstitution:(BOOL)a5 completionHandler:(id /* block */)a6;
- (void)removeAutomaticPasswordElementsInFrame:(id)a0 focusedPasswordControlUniqueID:(id)a1 passwordControlUniqueIDs:(id)a2;

@end
