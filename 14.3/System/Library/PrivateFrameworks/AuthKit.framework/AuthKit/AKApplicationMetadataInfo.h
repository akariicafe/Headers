@class NSString, NSDictionary;

@interface AKApplicationMetadataInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *authorizedAppListVersion;
@property (readonly, copy, nonatomic) NSDictionary *teams;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithResponseInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
