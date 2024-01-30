@class NSString, NSUUID;

@interface HMDSettingGroupModel : HMBModel <HMDSettingGroupModelProtocol>

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *hmbModelID;
@property (readonly, nonatomic) NSUUID *hmbParentModelID;
@property (readonly, nonatomic) NSString *nameForKeyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hmbProperties;

- (id)copyWithNewParentModelID:(id)a0;

@end
