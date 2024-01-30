@class NSUUID;

@interface HMDSettingRootGroupModel : HMDSettingGroupModel <HMDConflictResolutionModel>

@property (copy, nonatomic) NSUUID *conflictResolutionToken;

+ (id)hmbProperties;

- (id)initWithModelID:(id)a0 parentModelID:(id)a1;
- (id)nameForKeyPath;
- (id)copyWithNewParentModelID:(id)a0;

@end
