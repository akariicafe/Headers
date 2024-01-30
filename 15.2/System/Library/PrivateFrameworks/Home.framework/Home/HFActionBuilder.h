@class NSString, HMAction;

@interface HFActionBuilder : HFItemBuilder <HFComparable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMAction *action;
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;
@property (readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;

+ (Class)homeKitRepresentationClass;
+ (id)actionBuilderForAction:(id)a0 inHome:(id)a1;

- (void)setAction:(id)a0;
- (id)performValidation;
- (id)createNewAction;
- (BOOL)updateWithActionBuilder:(id)a0;
- (id)compareToObject:(id)a0;
- (BOOL)canUpdateWithActionBuilder:(id)a0;
- (id)copyForCreatingNewAction;
- (id)getOrCreateAction;
- (BOOL)isEquivalentToAction:(id)a0;
- (BOOL)hasSameTargetAsAction:(id)a0;
- (BOOL)hasSameTargetAsActionBuilder:(id)a0;

@end
