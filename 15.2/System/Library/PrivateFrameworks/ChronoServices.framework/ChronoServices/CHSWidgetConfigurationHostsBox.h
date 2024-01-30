@class NSDictionary;

@interface CHSWidgetConfigurationHostsBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *configurationsByHost;

- (void)encodeWithCoder:(id)a0;
- (id)initWithConfigurationsByHost:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
