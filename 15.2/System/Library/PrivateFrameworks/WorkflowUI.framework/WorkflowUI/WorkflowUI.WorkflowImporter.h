@interface WorkflowUI.WorkflowImporter : NSObject {
    void /* unknown type, empty encoding */ userInterface;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPresenter:(id)a0;
- (id)initWithUserInterface:(id)a0;
- (void)importWorkflow:(id)a0 shortcutSource:(int)a1 galleryIdentifier:(id)a2 trigger:(id)a3 triggerSource:(int)a4 provideSkipOption:(BOOL)a5 completion:(id /* block */)a6;

@end
