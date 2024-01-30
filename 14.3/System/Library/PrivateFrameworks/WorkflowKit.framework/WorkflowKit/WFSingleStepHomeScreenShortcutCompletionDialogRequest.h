@class NSString;

@interface WFSingleStepHomeScreenShortcutCompletionDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *applicationBundleIdentifier;

- (void).cxx_destruct;
- (id)initWithShortcutName:(id)a0 applicationBundleIdentifier:(id)a1;

@end
