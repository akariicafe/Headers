@class NSString;

@interface AXSiriShortcut : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *shortcutName;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *phrase;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithAccessibilityWorkflow:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
