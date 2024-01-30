@class NSString;

@interface IDSDestination : NSObject <IDSDestinationProtocol, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isGuest) BOOL guest;
@property (readonly, nonatomic, getter=isDevice) BOOL device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)destinationWithStrings:(id)a0;
+ (id)destinationWithDestinations:(id)a0;
+ (id)destinationWithDeviceURI:(id)a0;
+ (id)destinationWithRapportPublicIdentifierURI:(id)a0;
+ (id)destinationWithAlias:(id)a0 pushToken:(id)a1;
+ (id)destinationWithString:(id)a0;
+ (id)destinationWithGroup:(id)a0;
+ (id)defaultPairedDeviceDestination;
+ (id)sentinelSelfAliasDestination;
+ (id)destinationWithURI:(id)a0;

- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)groupID;
- (id)normalizedURIs;
- (id)normalizedURIStrings;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDestination:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
