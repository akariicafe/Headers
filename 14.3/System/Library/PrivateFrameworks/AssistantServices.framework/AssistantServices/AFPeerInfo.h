@class NSString;

@interface AFPeerInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isDeviceOwnedByCurrentUser;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (readonly, copy, nonatomic) NSString *idsDeviceUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *rapportEffectiveIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaSystemIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, nonatomic) BOOL isCommunalDevice;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *productType;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic) NSString *userInterfaceIdiom;
@property (readonly, copy, nonatomic) NSString *aceVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithIsDeviceOwnedByCurrentUser:(BOOL)a0 idsIdentifier:(id)a1 idsDeviceUniqueIdentifier:(id)a2 rapportEffectiveIdentifier:(id)a3 mediaSystemIdentifier:(id)a4 mediaRouteIdentifier:(id)a5 isCommunalDevice:(BOOL)a6 roomName:(id)a7 name:(id)a8 productType:(id)a9 buildVersion:(id)a10 userInterfaceIdiom:(id)a11 aceVersion:(id)a12;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)ad_shortDescription;
- (void)encodeWithCoder:(id)a0;

@end
