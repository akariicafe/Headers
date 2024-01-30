@class NSDate, NSString, NSArray, WFWorkflowIcon, NSSet, NSData, WFCoreDataWorkflowIcon, WFCoreDataWorkflowQuarantine, WFCoreDataWorkflowActions, WFWorkflowQuarantine, WFCoreDataRunEvent;

@interface WFCoreDataWorkflow : NSManagedObject <WFRecordStorage>

@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property (retain, nonatomic) WFWorkflowQuarantine *workflowQuarantine;
@property (retain, nonatomic) NSArray *workflowTypes;
@property (nonatomic) BOOL hiddenFromLibraryAndSync;
@property (copy, nonatomic) NSArray *deserializedActions;
@property (copy, nonatomic) NSArray *deserializedInputClasses;
@property (copy, nonatomic) NSArray *deserializedImportQuestions;
@property (copy, nonatomic) NSSet *accessResourcePerWorkflowStates;
@property (readonly, nonatomic, getter=isConflictOfOtherWorkflow) BOOL conflictOfOtherWorkflow;
@property (readonly, nonatomic) unsigned long long estimatedSize;
@property (nonatomic) long long remoteQuarantineStatus;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long actionCount;
@property (copy, nonatomic) NSString *actionsDescription;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (retain, nonatomic) NSData *cloudKitRecordMetadata;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (nonatomic) BOOL hiddenFromWidget;
@property (retain, nonatomic) NSData *importQuestionsData;
@property (retain, nonatomic) NSData *inputClassesData;
@property (copy, nonatomic) NSString *lastMigratedClientVersion;
@property (copy, nonatomic) NSString *lastSavedOnDeviceName;
@property (nonatomic) long long lastSyncedHash;
@property (copy, nonatomic) NSString *minimumClientVersion;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phrase;
@property (nonatomic) int remoteQuarantineStatusValue;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long syncHash;
@property (nonatomic) BOOL tombstoned;
@property (copy, nonatomic) NSString *workflowID;
@property (copy, nonatomic) NSString *workflowSubtitle;
@property (retain, nonatomic) NSSet *accessResourcePermissions;
@property (retain, nonatomic) WFCoreDataWorkflowActions *actions;
@property (retain, nonatomic) WFCoreDataWorkflow *conflictOf;
@property (retain, nonatomic) NSSet *conflicts;
@property (retain, nonatomic) WFCoreDataWorkflowIcon *icon;
@property (retain, nonatomic) NSSet *parents;
@property (retain, nonatomic) WFCoreDataWorkflowQuarantine *quarantine;
@property (retain, nonatomic) WFCoreDataRunEvent *runEvents;
@property (retain, nonatomic) NSSet *triggers;
@property (retain, nonatomic) NSSet *trustedDomains;

+ (id)fetchRequest;
+ (id)recordPropertyMap;
+ (id)descriptorFetchRequest;

@end
