@class INIntent;

@interface WFWidgetConfigurationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) INIntent *intent;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIntent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
