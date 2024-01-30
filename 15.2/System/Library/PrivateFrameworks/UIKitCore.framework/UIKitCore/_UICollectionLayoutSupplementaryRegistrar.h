@class NSString, NSMutableDictionary, NSMutableSet, NSMutableOrderedSet;

@interface _UICollectionLayoutSupplementaryRegistrar : NSObject <_UICollectionLayoutSupplementaryEnrolling> {
    NSMutableOrderedSet *_enrollmentIdentifiers;
    NSMutableSet *_uncommittedEnrollmentIdentifiers;
    NSMutableDictionary *_enrollmentsDict;
    NSMutableDictionary *_kindEnrollmentsDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)kindIndexForEnrollmentIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)pruneUncommitedEnrollments;
- (id)init;
- (void)commitEnrollment:(id)a0;
- (long long)countForKind:(id)a0;
- (id)enrollSupplementaryForKind:(id)a0;

@end
