@class NSString;

@interface CNUIContactStoreSaveExecutor : NSObject <CNUIContactSaveExecutor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)performSaveForMutableContact:(id)a0 group:(id)a1 container:(id)a2 saveConfiguration:(id)a3 issuedRequestIdentifiers:(id)a4;
- (id)executeSaveWithConfiguration:(id)a0 saveDelegate:(id)a1;

@end
