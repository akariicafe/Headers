@class IDSURI;

@interface IDSDestinationURI : IDSDestination

@property (readonly, nonatomic) IDSURI *uri;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURI:(id)a0;
- (id)groupID;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithURIString:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
