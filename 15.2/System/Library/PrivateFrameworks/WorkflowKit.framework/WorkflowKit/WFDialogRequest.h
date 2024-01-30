@class NSString, WFDialogAttribution;

@interface WFDialogRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFDialogAttribution *attribution;
@property (readonly, nonatomic) NSString *prompt;
@property (readonly, nonatomic) NSString *promptForDisplay;
@property (readonly, nonatomic) BOOL shouldCenterPrompt;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAppBundleIdentifier:(id)a0 prompt:(id)a1;
- (id)initWithAttribution:(id)a0 prompt:(id)a1;

@end
