@class IDSURI;

@interface IDSDestinationURI : IDSDestination

@property (readonly, nonatomic) IDSURI *uri;

+ (BOOL)supportsSecureCoding;

- (id)initWithURI:(id)a0;
- (id)destinationURIs;
- (id)initWithURIString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)destinationLightweightStatus;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
