@class NSString;

@interface TRSetupNetworkRequest : TRRequestMessage

@property (copy, nonatomic) NSString *networkSSID;
@property (copy, nonatomic) NSString *networkPassword;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
