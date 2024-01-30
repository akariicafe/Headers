@class NSString;

@interface AFPeerInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sharedUserID;
@property (readonly, nonatomic) BOOL isDeviceOwnedByCurrentUser;
@property (readonly, copy, nonatomic) NSString *assistantIdentifier;
@property (readonly, copy, nonatomic) NSString *sharedUserIdentifier;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (readonly, copy, nonatomic) NSString *idsDeviceUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *rapportEffectiveIdentifier;
@property (readonly, copy, nonatomic) NSString *homeKitAccessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaSystemIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, nonatomic) BOOL isCommunalDevice;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *productType;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic) NSString *userInterfaceIdiom;
@property (readonly, copy, nonatomic) NSString *aceVersion;
@property (readonly, nonatomic) BOOL isLocationSharingDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)ad_shortDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithIsDeviceOwnedByCurrentUser:(BOOL)a0 assistantIdentifier:(id)a1 idsIdentifier:(id)a2 idsDeviceUniqueIdentifier:(id)a3 sharedUserID:(id)a4 rapportEffectiveIdentifier:(id)a5 homeKitAccessoryIdentifier:(id)a6 mediaSystemIdentifier:(id)a7 mediaRouteIdentifier:(id)a8 isCommunalDevice:(BOOL)a9 roomName:(id)a10 name:(id)a11 productType:(id)a12 buildVersion:(id)a13 userInterfaceIdiom:(id)a14 aceVersion:(id)a15;
- (id)initWithIsDeviceOwnedByCurrentUser:(BOOL)a0 assistantIdentifier:(id)a1 sharedUserIdentifier:(id)a2 idsIdentifier:(id)a3 idsDeviceUniqueIdentifier:(id)a4 rapportEffectiveIdentifier:(id)a5 homeKitAccessoryIdentifier:(id)a6 mediaSystemIdentifier:(id)a7 mediaRouteIdentifier:(id)a8 isCommunalDevice:(BOOL)a9 roomName:(id)a10 name:(id)a11 productType:(id)a12 buildVersion:(id)a13 userInterfaceIdiom:(id)a14 aceVersion:(id)a15 isLocationSharingDevice:(BOOL)a16;
- (id)buildDictionaryRepresentation;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;

@end
