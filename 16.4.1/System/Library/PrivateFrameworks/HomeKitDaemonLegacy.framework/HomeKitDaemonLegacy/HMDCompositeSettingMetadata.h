@class HMDCompositeSettingPrivileges, NSString;
@protocol HMDCompositeSettingConstraint;

@interface HMDCompositeSettingMetadata : HMFObject

@property (readonly) id<HMDCompositeSettingConstraint> constraint;
@property (readonly) HMDCompositeSettingPrivileges *privileges;
@property (readonly, copy) NSString *keyPath;

- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 constraint:(id)a1 privileges:(id)a2;

@end
