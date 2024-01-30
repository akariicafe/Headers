@class NSDate, WFWorkflowTrustedResources, WFWorkflowQuarantine, RLMLinkingObjects, WFWorkflowIcon, WFRealmWorkflowIcon, NSString, NSSet, RLMArray, NSArray, NSData, WFRealmWorkflowQuarantine, NSNumber;
@protocol WFWorkflowType, WFWorkflowInputClass;

@interface WFRealmWorkflow : RLMObject <WFRecordStorage>

@property (copy) NSString *workflowID;
@property (retain) NSDate *createdAt;
@property (retain) NSDate *modifiedAt;
@property (copy) NSString *name;
@property (copy) NSString *legacyName;
@property (retain) WFRealmWorkflowIcon *icon;
@property (retain) WFRealmWorkflowQuarantine *quarantine;
@property BOOL hiddenFromLibraryAndSync;
@property (retain) WFWorkflowTrustedResources *trustedResources;
@property (retain) RLMArray<WFWorkflowType> *workflowTypeContainers;
@property (retain) RLMArray<WFWorkflowInputClass> *inputClassContainers;
@property (getter=isHiddenInComplication) BOOL hiddenInComplication;
@property long long sortOrdering;
@property (copy) NSString *minimumClientVersion;
@property (copy) NSData *actionsData;
@property (copy) NSData *importQuestionsData;
@property (copy) NSString *workflowSubtitle;
@property (copy) NSString *actionsDescription;
@property (copy) NSString *associatedAppBundleIdentifier;
@property (copy) NSString *galleryIdentifier;
@property (copy) NSString *source;
@property (retain) WFRealmWorkflow *conflictOf;
@property (readonly) RLMLinkingObjects *conflictingWorkflows;
@property (copy) NSString *lastSavedOnDeviceName;
@property long long lastSyncedHash;
@property BOOL deleted;
@property (copy) NSString *lastMigratedClientVersion;
@property long long remoteQuarantineStatus;
@property (copy) NSData *cloudKitRecordMetadata;
@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property (retain, nonatomic) WFWorkflowQuarantine *workflowQuarantine;
@property (copy, nonatomic) NSArray *workflowTypes;
@property (copy, nonatomic) NSArray *inputClasses;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *importQuestions;
@property (copy, nonatomic) NSSet *accessResourcePerWorkflowStates;
@property (readonly, nonatomic) NSNumber *location;
@property (readonly, nonatomic, getter=isConflictOfOtherWorkflow) BOOL conflictOfOtherWorkflow;
@property (readonly, nonatomic) unsigned long long estimatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordPropertyMap;
+ (id)defaultPropertyValues;
+ (id)primaryKey;
+ (id)requiredProperties;
+ (id)className;
+ (id)linkingObjectsProperties;
+ (id)ignoredProperties;

- (void).cxx_destruct;
- (id)descriptor;
- (id)identifier;

@end
