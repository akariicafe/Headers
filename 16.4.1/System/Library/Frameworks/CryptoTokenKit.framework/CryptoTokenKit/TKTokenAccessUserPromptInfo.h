@class NSString, NSUUID;

@interface TKTokenAccessUserPromptInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clientDisplayName;
@property (readonly, nonatomic) NSString *providerDisplayName;
@property (readonly, nonatomic) NSUUID *correlationID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTokenAccessRequest:(id)a0;

@end
