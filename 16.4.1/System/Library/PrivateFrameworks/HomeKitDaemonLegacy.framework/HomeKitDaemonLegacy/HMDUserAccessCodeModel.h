@class NSString, NSUUID;

@interface HMDUserAccessCodeModel : HMDBackingStoreModelObject

@property (copy) NSString *value;
@property (retain) NSUUID *changedByUserUUID;

+ (id)properties;
+ (id)modelUUIDWithUUID:(id)a0;

- (id)initWithUserUUID:(id)a0;

@end
