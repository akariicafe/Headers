@class NSString;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) unsigned int flags;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned int)updateWithEndpoint:(id)a0;

@end
