@class NSString;

@interface WFSSIDDisclosureWarning : WFDisclosureWarning

@property (readonly, nonatomic) NSString *displayedNetworkName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedMessage;
- (id)initWithDisplayedNetworkName:(id)a0;

@end
