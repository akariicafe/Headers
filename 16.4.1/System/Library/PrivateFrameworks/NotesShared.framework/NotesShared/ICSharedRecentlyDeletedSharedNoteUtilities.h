@interface ICSharedRecentlyDeletedSharedNoteUtilities : NSObject

+ (id)messageForSharedNotesType:(unsigned long long)a0;
+ (id)notesSharedViaICloudFromNotes:(id)a0;
+ (unsigned long long)sharedNoteTypeForNotes:(id)a0;
+ (void)showAlertsIfNecessaryForDeletingSharedNotes:(id)a0 noteDeleteType:(unsigned long long)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
+ (void)showDeletingSharedNotesAlertWithType:(unsigned long long)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
+ (id)titleForSharedNotesType:(unsigned long long)a0;

@end
