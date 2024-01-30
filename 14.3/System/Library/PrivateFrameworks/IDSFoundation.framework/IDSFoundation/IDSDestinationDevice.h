@class IDSURI;

@interface IDSDestinationDevice : IDSDestination

@property (retain, nonatomic) IDSURI *destinationURI;
@property (nonatomic) BOOL isGuest;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isDeviceURI:(id)a0;

- (void).cxx_destruct;
- (id)destinationURIs;
- (id)groupID;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isDevice;
- (id)initWithURI:(id)a0 isGuest:(BOOL)a1;
- (id)initWithDeviceURI:(id)a0;
- (id)initWithIDSDeviceURI:(id)a0;
- (id)initWithRapportPublicIdentifierURI:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
