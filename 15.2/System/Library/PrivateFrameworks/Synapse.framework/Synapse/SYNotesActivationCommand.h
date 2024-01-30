@interface SYNotesActivationCommand : NSObject

+ (void)activateWithMetaActivity:(id)a0 completion:(id /* block */)a1;
+ (void)_activateWithMetaActivity:(id)a0 completion:(id /* block */)a1;
+ (void)activateWithDomainIdentifier:(id)a0 noteIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)_activateWithDomainIdentifier:(id)a0 noteIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)activateWithNoteIdentifier:(id)a0 completion:(id /* block */)a1;

@end
