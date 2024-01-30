@class NSString, UIAlertView;

@interface DADiagnosticsPSController : PSListController <DADiagnosticSaveNotesDelegate, UIAlertViewDelegate> {
    UIAlertView *_simpleAlert;
    UIAlertView *_savingDataAlert;
    SEL _simpleConfirmSheetDismissedSEL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)diagnosticsVisible;
+ (id)dumpRuntimeStateSpecifiers;
+ (id)linkSpecifier;

- (void).cxx_destruct;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (id)specifiers;
- (void)alertView:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)suspend;
- (void)handleDumpRuntimeStateForSpecifier:(id)a0;
- (id)diagnosticSpecifiers;
- (void)handleSaveAllLogsStep2;
- (void)runSimpleAlertWithTitle:(id)a0 message:(id)a1 dismissedSelector:(SEL)a2;
- (void)setLoggingEnabled:(BOOL)a0 forSpecifier:(id)a1;
- (BOOL)isLoggingEnabledForSpecifier:(id)a0;
- (id)pathsOfAllLogFiles;
- (id)savedLogsDirectoryNameForSpecifier:(id)a0;
- (BOOL)saveFileAtPath:(id)a0 toDirectory:(id)a1 withExtension:(id)a2 error:(id *)a3;
- (void)purgeFileAtPath:(id)a0;
- (void)runSimpleAlertWithTitle:(id)a0 message:(id)a1;
- (void)saveLogsWithNotes:(id)a0;
- (void)_presentNotesController;
- (void)_dismissSavingDataAlert;
- (void)saveNotesInBackground:(id)a0;
- (void)setBooleanProperty:(id)a0 withSpecifier:(id)a1;
- (id)booleanPropertyWithSpecifier:(id)a0;
- (void)handleSaveAllLogsForSpecifier:(id)a0;
- (void)handleClearAllLogsForSpecifier:(id)a0;
- (id)pathsOfPurgableFiles;

@end
