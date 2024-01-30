@class NSString, NSSet, NSUUID, HMApplicationData, HMHome;

@interface HMActionSetBuilder : HMActionSet <HMActionSetBuilderInternal, HMActionSetBuilderPrivate, HMActionSetBuilder>

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *actions;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *actionSetType;
@property (readonly, nonatomic) HMApplicationData *applicationData;

+ (id)alloc;


@end
