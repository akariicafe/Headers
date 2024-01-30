@class NSDictionary, NSString, NSURL;

@interface HMAsset : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSURL *resourceURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 resourceURL:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
