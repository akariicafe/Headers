@class NSSet, HFEventBuilder;
@protocol HFLocationEventBuilder;

@interface HFLocationTriggerBuilder : HFTriggerBuilder

@property (retain, nonatomic) NSSet *stagedEvents;
@property (retain, nonatomic) HFEventBuilder<HFLocationEventBuilder> *eventBuilder;
@property (readonly, nonatomic) BOOL isCustomLocationTrigger;
@property (readonly, nonatomic) BOOL locationCanBeEdited;

+ (Class)homeKitRepresentationClass;

- (id)_performValidation;
- (void).cxx_destruct;
- (BOOL)supportsConditions;
- (BOOL)supportsEndEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)naturalLanguageNameOfType:(unsigned long long)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1 context:(id)a2;
- (id)_updateEvents;
- (id)_allActionSets;
- (BOOL)requiresConfirmationToRun;
- (BOOL)secureActionsRequireConfirmationToRun;
- (BOOL)requiresLocationServicesAuthorization;
- (BOOL)requiresFMFDeviceToRun;

@end
