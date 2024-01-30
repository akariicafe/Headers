@class NSString;

@interface ILMessageFilterReportRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *messageBody;
@property (copy, nonatomic) NSString *receiverISOCountryCode;
@property (nonatomic) long long suggestedAction;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqualToRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtensionIdentifier:(id)a0;

@end
