@class NSString;

@interface CNUIContactStoreLinkedContactSaveExecutor : NSObject <CNUIContactSaveExecutor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executeSaveWithConfiguration:(id)a0 saveDelegate:(id)a1;
- (id)saveLinkedContactChanges:(id)a0 mutableContact:(id)a1 contactStore:(id)a2 editingLinkedContacts:(id)a3 ignoresParentalRestrictions:(BOOL)a4 saveWasAuthorized:(BOOL)a5 issuedSaveRequestIdentifiers:(id)a6;

@end
