@class NSString, NSArray, HMAction;

@interface HFActionBuilder : HFItemBuilder <HFComparable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMAction *action;
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;
@property (readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;
@property (readonly, nonatomic) NSArray *containedAccessoryRepresentables;

+ (id)actionBuilderForAction:(id)a0 inHome:(id)a1;
+ (Class)homeKitRepresentationClass;

- (id)performValidation;
- (void)setAction:(id)a0;
- (id)validationError;
- (id)createNewAction;
- (id)asGeneric;
- (id)copyForCreatingNewAction;
- (BOOL)hasSameTargetAsAction:(id)a0;
- (BOOL)canUpdateWithActionBuilder:(id)a0;
- (id)compareToObject:(id)a0;
- (id)getOrCreateAction;
- (BOOL)hasSameTargetAsActionBuilder:(id)a0;
- (BOOL)isEquivalentToAction:(id)a0;
- (BOOL)updateWithActionBuilder:(id)a0;

@end
