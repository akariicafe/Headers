@class _SFQuickLookDocument, NSString, NSArray, UIDocumentInteractionController, _SFQuickLookDocumentView;

@interface _SFQuickLookDocumentController : NSObject <_SFQuickLookDocumentViewDelegate> {
    NSArray *_buttonActions;
    UIDocumentInteractionController *_documentInteractionController;
    _SFQuickLookDocument *_quickLookDocument;
}

@property (readonly, nonatomic) _SFQuickLookDocumentView *documentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_supportedApplications;
- (id)_actionTitleForType:(long long)a0 withActionCount:(unsigned long long)a1;
- (long long)dataOwnerForQuickLookDocumentView:(id)a0;
- (void)quickLookDocumentView:(id)a0 didSelectActionAtIndex:(long long)a1;
- (id)itemProviderForQuickLookDocumentView:(id)a0;
- (void)updateWithQuickLookDocument:(id)a0;
- (void)presentDocumentInteractionControllerFromSource:(id)a0;
- (void)_updateActionButtons;

@end
