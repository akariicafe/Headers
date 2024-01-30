@class NSString;

@interface CNUIContactStoreSaveExecutor : NSObject <CNUIContactSaveExecutor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executeSaveWithConfiguration:(id)a0 saveDelegate:(id)a1;
- (BOOL)handleContainerContextForSaveConfiguration:(id)a0 contactToSave:(id)a1 saveDelegate:(id)a2 issuedRequestIdentifiers:(id)a3 additionalLinkedContacts:(id)a4;
- (void)handleGroupContextForSaveConfiguration:(id)a0 contactToSave:(id)a1 issuedRequestIdentifiers:(id)a2 saveDelegate:(id)a3;
- (BOOL)performSaveForMutableContact:(id)a0 group:(id)a1 container:(id)a2 saveConfiguration:(id)a3 issuedRequestIdentifiers:(id)a4;
- (id)saveLinkedContactsWithSaveConfiguration:(id)a0 contactToSave:(id)a1 additionalLinkedContacts:(id)a2 issuedRequestIdentifiers:(id)a3 saveDelegate:(id)a4;
- (BOOL)saveShadowContactForSaveConfiguration:(id)a0;
- (id)validatedContactForSaveConfiguration:(id)a0;

@end
