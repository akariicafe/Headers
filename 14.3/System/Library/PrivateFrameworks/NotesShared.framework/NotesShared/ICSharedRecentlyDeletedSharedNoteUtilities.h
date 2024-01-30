@interface ICSharedRecentlyDeletedSharedNoteUtilities : NSObject

+ (unsigned long long)sharedNoteTypeForNotes:(id)a0;
+ (void)showDeletingSharedNotesAlertWithType:(unsigned long long)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
+ (id)notesSharedViaICloudFromNotes:(id)a0;
+ (void)showAlertsIfNecessaryForDeletingSharedNotes:(id)a0 noteDeleteType:(unsigned long long)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
+ (id)titleForSharedNotesType:(unsigned long long)a0;
+ (id)messageForSharedNotesType:(unsigned long long)a0;

@end
