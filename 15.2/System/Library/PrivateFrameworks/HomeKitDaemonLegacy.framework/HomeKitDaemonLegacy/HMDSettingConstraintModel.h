@class NSString, NSUUID, NSData, NSNumber;

@interface HMDSettingConstraintModel : HMBModel <HMDSettingConstraintModelProtocol>

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *numberValue;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSData *dataValue;
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
