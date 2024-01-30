@class NSString, NSDictionary, NSURL;

@interface HMDAsset : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSURL *resourceURL;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 resourceURL:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
