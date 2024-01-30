@class NSString, WFDialogAttribution;

@interface WFDialogRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFDialogAttribution *attribution;
@property (readonly, copy, nonatomic) NSString *prompt;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAppBundleIdentifier:(id)a0 prompt:(id)a1;
- (id)initWithAttribution:(id)a0 prompt:(id)a1;

@end
