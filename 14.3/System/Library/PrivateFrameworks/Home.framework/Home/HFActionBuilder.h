@class HMAction;

@interface HFActionBuilder : HFItemBuilder

@property (readonly, nonatomic) HMAction *action;
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;
@property (readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;

+ (id)actionBuilderForAction:(id)a0 inHome:(id)a1;
+ (Class)homeKitRepresentationClass;

- (BOOL)updateWithActionBuilder:(id)a0;
- (id)copyForCreatingNewAction;
- (id)getOrCreateAction;
- (BOOL)isEquivalentToAction:(id)a0;
- (BOOL)hasSameTargetAsAction:(id)a0;
- (BOOL)hasSameTargetAsActionBuilder:(id)a0;
- (void)setAction:(id)a0;
- (id)performValidation;
- (id)createNewAction;

@end
