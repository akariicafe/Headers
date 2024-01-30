@class UIKeyCommand, BKSHIDEventAuthenticationMessage;

@interface _UIKeyShortcutHUDDismissalResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIKeyCommand *keyCommand;
@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *pasteAuthenticationMessage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
