@class NSSet, NSString;
@protocol CRKFeatureDataStoreProtocol;

@interface CRKFeatureDataStore_iOS : NSObject <CRKSharedFeatureDataStoreProviding, CRKFeatureDataStoreProtocol>

@property (class, readonly, nonatomic) id<CRKFeatureDataStoreProtocol> sharedDataStore;

@property (readonly, nonatomic, getter=isClassroomUnpromptedScreenObservationForced) BOOL classroomUnpromptedScreenObservationForced;
@property (readonly, nonatomic, getter=isClassroomAutomaticClassJoiningForced) BOOL classroomAutomaticClassJoiningForced;
@property (readonly, nonatomic, getter=isClassroomRequestPermissionToLeaveClassesForced) BOOL classroomRequestPermissionToLeaveClassesForced;
@property (readonly, copy, nonatomic) NSSet *activeClassroomRoles;
@property (nonatomic, getter=isClassroomStudentRoleEnabled) BOOL classroomStudentRoleEnabled;
@property (nonatomic, getter=isClassroomInstructorRoleEnabled) BOOL classroomInstructorRoleEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)crkBoolTypeFromMCBoolType:(int)a0;

- (unsigned long long)effectiveBoolValueForSetting:(id)a0 outAsk:(BOOL *)a1;
- (unsigned long long)boolRestrictionForFeature:(id)a0;
- (void)setBoolValue:(BOOL)a0 ask:(BOOL)a1 forSetting:(id)a2;
- (unsigned long long)effectiveValueForSetting:(id)a0 configurationUUID:(id)a1 outAsk:(BOOL *)a2;
- (void)setBoolValue:(BOOL)a0 ask:(BOOL)a1 forSetting:(id)a2 configurationUUID:(id)a3;

@end
