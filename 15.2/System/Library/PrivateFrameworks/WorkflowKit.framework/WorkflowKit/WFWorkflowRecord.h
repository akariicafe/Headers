@class NSDate, NSString, NSArray, WFWorkflowIcon, NSSet, NSData, NSDictionary, WFWorkflowQuarantine;

@interface WFWorkflowRecord : WFRecord <WFNaming>

@property (readonly, copy, nonatomic) NSString *wfName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *legacyName;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *workflowSubtitle;
@property (copy, nonatomic) NSString *actionsDescription;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) WFWorkflowQuarantine *quarantine;
@property (copy, nonatomic) NSArray *workflowTypes;
@property (copy, nonatomic) NSArray *quickActionSurfacesForSharing;
@property (copy, nonatomic) NSArray *inputClasses;
@property (copy, nonatomic) NSDictionary *noInputBehavior;
@property (copy, nonatomic) NSArray *outputClasses;
@property (nonatomic) BOOL hasShortcutInputVariables;
@property (nonatomic) BOOL hasOutputFallback;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) long long actionCount;
@property (copy, nonatomic) NSArray *importQuestions;
@property (copy, nonatomic) NSString *minimumClientVersion;
@property (nonatomic) BOOL hiddenInComplication;
@property (nonatomic) BOOL hiddenFromLibraryAndSync;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (copy, nonatomic) NSString *lastMigratedClientVersion;
@property (nonatomic) long long lastSyncedHash;
@property (copy, nonatomic) NSString *lastSavedOnDeviceName;
@property (readonly, nonatomic) unsigned long long estimatedSize;
@property (copy, nonatomic) NSSet *accessResourcePerWorkflowStates;
@property (copy, nonatomic) NSSet *smartPromptPerWorkflowStates;
@property (nonatomic) long long remoteQuarantineStatus;
@property (readonly, nonatomic, getter=isConflictOfOtherWorkflow) BOOL conflictOfOtherWorkflow;
@property (copy, nonatomic) NSData *cloudKitRecordMetadata;
@property (nonatomic) long long syncHash;

+ (id)workflowSubtitleForActionCount:(unsigned long long)a0 savedSubtitle:(id)a1;
+ (id)defaultPropertyValues;

- (void).cxx_destruct;
- (id)fileRepresentation;
- (BOOL)addWatchWorkflowTypeIfEligible;
- (BOOL)isEquivalentForSyncTo:(id)a0;
- (BOOL)loadFromPeaceData:(id)a0 keyImageData:(id)a1 error:(id *)a2;
- (id)initWithPeaceCloudKitRecord:(id)a0 error:(id *)a1;
- (id)initWithPeaceCoreDataModel:(id)a0 error:(id *)a1;
- (BOOL)isEligibleForWatch;
- (void)addWatchWorkflowType;
- (BOOL)saveChangesToStorage:(id)a0 error:(id *)a1;
- (BOOL)addWatchWorkflowTypeIfEligibleWithIneligibleActionIdentifiers:(id)a0;
- (BOOL)isEligibleForWatchWithIneligibleActionIdentifiers:(id)a0;

@end
