@class NSString, HMFVersion;

@interface HMDCompositeSetting : HMFObject <HMDCompositeSettingIsEqualValueImplementing, HMFLogging>

@property (readonly, copy) HMFVersion *readVersion;
@property (readonly, copy) HMFVersion *writeVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualValue:(id)a0;
- (id)initWithReadVersion:(id)a0 writeVersion:(id)a1;

@end
