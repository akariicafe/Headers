@class WFFileRepresentation;

@interface WFiCloudShortcutFileExporter : WFShortcutExporter

@property (retain, nonatomic) WFFileRepresentation *signedShortcutFile;

- (void).cxx_destruct;
- (void)exportWorkflowWithCompletion:(id /* block */)a0;

@end
