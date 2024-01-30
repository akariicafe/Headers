@class WFShortcutPackageFile, WFFileRepresentation;

@interface WFSignedShortcutFileProvider : WFWorkflowItemProvider

@property (retain, nonatomic) WFShortcutPackageFile *shortcutFile;
@property (retain, nonatomic) WFFileRepresentation *signedShortcutFile;

- (id)item;
- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0 userInterface:(id)a1;

@end
