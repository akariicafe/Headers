@class NSString, NSObject;
@protocol CRKClassKitFacade;

@interface CRKClassKitFacadeDecoratorBase : NSObject <CRKClassKitFacade>

@property (readonly, nonatomic) NSObject<CRKClassKitFacade> *underlyingClassKitFacade;
@property (readonly, nonatomic) long long accountState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingAccountState;

- (void)executeQuery:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)currentUserWithCompletion:(id /* block */)a0;
- (void)deregisterDataObserver:(id)a0;
- (void)enrolledClassesWithCompletion:(id /* block */)a0;
- (void)instructedClassesWithCompletion:(id /* block */)a0;
- (void)registerDataObserver:(id)a0;
- (void)removeClass:(id)a0 completion:(id /* block */)a1;
- (void)saveClass:(id)a0 completion:(id /* block */)a1;
- (void)addInstructor:(id)a0 toClass:(id)a1;
- (void)addStudent:(id)a0 toClass:(id)a1;
- (id)classDataObserverWithSortDescriptors:(id)a0;
- (id)initWithClassKitFacade:(id)a0;
- (void)instructorsInClassWithObjectID:(id)a0 completion:(id /* block */)a1;
- (id)locationsObserverWithSortDescriptors:(id)a0;
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)a0 completion:(id /* block */)a1;
- (void)locationsWithObjectIDs:(id)a0 completion:(id /* block */)a1;
- (id)makeClassWithLocationID:(id)a0 name:(id)a1;
- (id)makeInstructorQueryForSearchString:(id)a0 locationIDs:(id)a1 sortingGivenNameFirst:(BOOL)a2 pageSize:(long long)a3;
- (id)makeQueryForPersonsWithIdentifiers:(id)a0;
- (id)makeStudentQueryForSearchString:(id)a0 locationIDs:(id)a1 sortingGivenNameFirst:(BOOL)a2 pageSize:(long long)a3;
- (id)objectIDsOfInstructorsInClass:(id)a0;
- (id)objectIDsOfStudentsInClass:(id)a0;
- (BOOL)ownsError:(id)a0;
- (id)personObserverWithPersonIDs:(id)a0 sortDescriptors:(id)a1;
- (void)removeInstructor:(id)a0 fromClass:(id)a1;
- (void)removeStudent:(id)a0 fromClass:(id)a1;
- (void)studentsInClassWithObjectID:(id)a0 completion:(id /* block */)a1;
- (id)subscribeToClassMembershipChangeEvents:(id /* block */)a0;
- (id)subscribeToCurrentUserDidChangeEvents:(id /* block */)a0;

@end
