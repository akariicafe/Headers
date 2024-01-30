@class NSSet, NSString;

@interface TUThumperCTCapabilitiesState : TUCTCapabilitiesState <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isApproved) BOOL approved;
@property (copy, nonatomic) NSSet *approvedSecondaryDeviceIDs;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic, getter=isAssociated) BOOL associated;
@property (copy, nonatomic) NSString *localDeviceID;
@property (nonatomic) BOOL supportsDefaultPairedDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unarchivedObjectClasses;

- (BOOL)isEqualToCapabilitiesState:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapabilityInfo:(id)a0;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)publiclyAccessibleCopy;

@end
