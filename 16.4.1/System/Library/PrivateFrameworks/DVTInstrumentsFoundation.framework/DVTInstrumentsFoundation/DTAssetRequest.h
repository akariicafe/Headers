@class NSString, DTXMessage;

@interface DTAssetRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *assetPath;
@property (readonly, nonatomic) DTXMessage *message;

+ (id)requestWithIdentifier:(id)a0 path:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 path:(id)a1;

@end
