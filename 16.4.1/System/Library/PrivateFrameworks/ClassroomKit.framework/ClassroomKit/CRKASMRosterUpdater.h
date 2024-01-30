@class NSObject;
@protocol CRKClassKitRosterRequirements;

@interface CRKASMRosterUpdater : NSObject

@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements;

- (id)initWithRequirements:(id)a0;
- (void).cxx_destruct;
- (id)courseWithIdentifier:(id)a0 inRoster:(id)a1;
- (void)createClassOperationDidFinish:(id)a0 completion:(id /* block */)a1;
- (void)createClassWithProperties:(id)a0 completion:(id /* block */)a1;
- (id /* block */)errorWrappingCompletionForCompletion:(id /* block */)a0 selectorName:(id)a1;
- (id)objectIDForCourseWithIdentifier:(id)a0 inRoster:(id)a1 error:(id *)a2;
- (void)removeCourseWithIdentifier:(id)a0 roster:(id)a1 completion:(id /* block */)a2;
- (void)removeOperationDidFinish:(id)a0 completion:(id /* block */)a1;
- (void)updateClassOperationDidFinish:(id)a0 completion:(id /* block */)a1;
- (void)updateCourseWithIdentifier:(id)a0 properties:(id)a1 roster:(id)a2 completion:(id /* block */)a3;

@end
