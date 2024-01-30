@class NSString;
@protocol CRKClassKitFacade;

@interface CRKPersonaAdoptingClassKitFacade : NSObject <CRKClassKitFacade>

@property (readonly, nonatomic) id<CRKClassKitFacade> classKitFacade;
@property (readonly, nonatomic) long long accountState;
@property (readonly, copy, nonatomic) NSString *currentUserDidChangeNotificationName;
@property (readonly, copy, nonatomic) NSString *currentUserInfoKey;
@property (readonly, copy, nonatomic) NSString *studentClassMembershipChangeDarwinNotificationName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingAccountState;

- (void).cxx_destruct;
- (void)executeQuery:(id)a0;
- (id)currentPersona;
- (void)currentUserWithCompletion:(id /* block */)a0;
- (void)registerDataObserver:(id)a0;
- (void)deregisterDataObserver:(id)a0;
- (void)instructedClassesWithCompletion:(id /* block */)a0;
- (void)saveClass:(id)a0 completion:(id /* block */)a1;
- (void)enrolledClassesWithCompletion:(id /* block */)a0;
- (id)makeQueryForPersonsWithIdentifiers:(id)a0;
- (BOOL)ownsError:(id)a0;
- (id)instructorObserverWithSortDescriptors:(id)a0;
- (void)instructorsInClassWithObjectID:(id)a0 completion:(id /* block */)a1;
- (id)studentObserverWithSortDescriptors:(id)a0;
- (void)studentsInClassWithObjectID:(id)a0 completion:(id /* block */)a1;
- (id)classDataObserverWithSortDescriptors:(id)a0;
- (void)removeClass:(id)a0 completion:(id /* block */)a1;
- (id)makeClassWithLocationID:(id)a0 name:(id)a1;
- (void)addStudent:(id)a0 toClass:(id)a1;
- (void)removeStudent:(id)a0 fromClass:(id)a1;
- (id)objectIDsOfStudentsInClass:(id)a0;
- (void)addInstructor:(id)a0 toClass:(id)a1;
- (void)removeInstructor:(id)a0 fromClass:(id)a1;
- (id)objectIDsOfInstructorsInClass:(id)a0;
- (id)currentUserDataObserverWithSortDescriptors:(id)a0;
- (id)locationsObserverWithSortDescriptors:(id)a0;
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)a0 completion:(id /* block */)a1;
- (void)locationsWithObjectIDs:(id)a0 completion:(id /* block */)a1;
- (id)makeStudentQueryForSearchString:(id)a0 locationIDs:(id)a1 sortingGivenNameFirst:(BOOL)a2 pageSize:(long long)a3;
- (id)makeInstructorQueryForSearchString:(id)a0 locationIDs:(id)a1 sortingGivenNameFirst:(BOOL)a2 pageSize:(long long)a3;
- (void)explicitlyAdoptPersonalPersonaAndPerformBlock:(id /* block */)a0;
- (id)personalPersonaUniqueString;
- (void)performBlockWithPersonalPersona:(id /* block */)a0;
- (id)initWithClassKitFacade:(id)a0;

@end
