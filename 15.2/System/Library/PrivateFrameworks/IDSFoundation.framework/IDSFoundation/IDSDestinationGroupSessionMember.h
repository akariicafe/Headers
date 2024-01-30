@class NSString;

@interface IDSDestinationGroupSessionMember : IDSDestination

@property (readonly, nonatomic) NSString *uri;
@property (readonly, nonatomic) BOOL isLightWeight;

+ (BOOL)supportsSecureCoding;

- (id)initWithURI:(id)a0;
- (id)destinationURIs;
- (BOOL)isDevice;
- (void)encodeWithCoder:(id)a0;
- (id)destinationLightweightStatus;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURI:(id)a0 isLightWeight:(BOOL)a1;

@end
