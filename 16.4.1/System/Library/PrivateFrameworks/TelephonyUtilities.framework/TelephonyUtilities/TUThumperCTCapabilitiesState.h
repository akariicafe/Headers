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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)publiclyAccessibleCopy;
- (void).cxx_destruct;
- (id)initWithCapabilityInfo:(id)a0;
- (BOOL)isEqualToCapabilitiesState:(id)a0;

@end
