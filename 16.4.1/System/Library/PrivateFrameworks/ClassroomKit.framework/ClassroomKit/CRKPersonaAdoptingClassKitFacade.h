@class CRKClassKitPersonaAdopter;

@interface CRKPersonaAdoptingClassKitFacade : CRKClassKitFacadeDecoratorBase

@property (readonly, nonatomic) CRKClassKitPersonaAdopter *personaAdopter;

+ (id)keyPathsForValuesAffectingCurrentPersonaUniqueString;

- (void)executeQuery:(id)a0;
- (void).cxx_destruct;
- (void)currentUserWithCompletion:(id /* block */)a0;
- (void)deregisterDataObserver:(id)a0;
- (void)enrolledClassesWithCompletion:(id /* block */)a0;
- (void)instructedClassesWithCompletion:(id /* block */)a0;
- (void)registerDataObserver:(id)a0;
- (void)removeClass:(id)a0 completion:(id /* block */)a1;
- (void)saveClass:(id)a0 completion:(id /* block */)a1;
- (id)currentPersonaUniqueString;
- (id)initWithClassKitFacade:(id)a0 personaBlockPerformer:(id)a1;
- (void)instructorsInClassWithObjectID:(id)a0 completion:(id /* block */)a1;
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)a0 completion:(id /* block */)a1;
- (void)locationsWithObjectIDs:(id)a0 completion:(id /* block */)a1;
- (void)performBlockWithClassKitPersona:(id /* block */)a0;
- (void)studentsInClassWithObjectID:(id)a0 completion:(id /* block */)a1;

@end
