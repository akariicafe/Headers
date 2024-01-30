@class NSString, NSDictionary;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *persistentIdentifier;
@property (copy) NSDictionary *cameraCapabilities;
@property (readonly, nonatomic) unsigned int flags;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)updateWithEndpoint:(id)a0;

@end
