@class NSString, NSURL, TUCTCapabilityInfo, NSData;

@interface TUCTCapabilitiesState : NSObject <NSCopying, TUPubliclyAccessibleCopying, TUSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) TUCTCapabilityInfo *ctCapabilityInfo;
@property (nonatomic) int provisioningStatus;
@property (copy, nonatomic) NSURL *provisioningURL;
@property (nonatomic, getter=isProvisioningURLInvalid) BOOL provisioningURLInvalid;
@property (copy, nonatomic) NSData *provisioningPostData;
@property (nonatomic, getter=isSupported) BOOL supported;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isCurrentlyAvailable) BOOL currentlyAvailable;
@property (nonatomic, getter=isRoamingSupported) BOOL roamingSupported;
@property (nonatomic, getter=isRoamingEnabled) BOOL roamingEnabled;
@property (nonatomic, getter=isEmergencySupported) BOOL emergencySupported;
@property (nonatomic, getter=isEmergencyCurrentlyAvailable) BOOL emergencyCurrentlyAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;

- (BOOL)isEqualToCapabilitiesState:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapabilityInfo:(id)a0;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)invalidateProvisioningURL;
- (id)publiclyAccessibleCopy;

@end
