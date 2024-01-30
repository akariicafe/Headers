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

- (void)suspend;
- (id)specifiers;
- (void).cxx_destruct;
- (void)alertView:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)handleClearAllLogsForSpecifier:(id)a0;
- (void)_dismissSavingDataAlert;
- (void)setLoggingEnabled:(BOOL)a0 forSpecifier:(id)a1;
- (void)_presentNotesController;
- (id)booleanPropertyWithSpecifier:(id)a0;
- (id)diagnosticSpecifiers;
- (void)handleDumpRuntimeStateForSpecifier:(id)a0;
- (void)handleSaveAllLogsForSpecifier:(id)a0;
- (void)handleSaveAllLogsStep2;
- (BOOL)isLoggingEnabledForSpecifier:(id)a0;
- (id)pathsOfAllLogFiles;
- (id)pathsOfPurgableFiles;
- (void)purgeFileAtPath:(id)a0;
- (void)runSimpleAlertWithTitle:(id)a0 message:(id)a1;
- (void)runSimpleAlertWithTitle:(id)a0 message:(id)a1 dismissedSelector:(SEL)a2;
- (BOOL)saveFileAtPath:(id)a0 toDirectory:(id)a1 withExtension:(id)a2 error:(id *)a3;
- (void)saveLogsWithNotes:(id)a0;
- (void)saveNotesInBackground:(id)a0;
- (id)savedLogsDirectoryNameForSpecifier:(id)a0;
- (void)setBooleanProperty:(id)a0 withSpecifier:(id)a1;

@end
