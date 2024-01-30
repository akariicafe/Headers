@class NSUUID, NSArray, HMAccessory, NSString, _HMAccessoryProfile;

@interface HMAccessoryProfile : NSObject <HMObjectMerge>

@property (readonly, nonatomic) _HMAccessoryProfile *accessoryProfile;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSArray *services;
@property (readonly, weak, nonatomic) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshStateWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)profileUniqueIdentifier;
- (void)handleRuntimeStateUpdate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccessoryProfile:(id)a0;

@end
