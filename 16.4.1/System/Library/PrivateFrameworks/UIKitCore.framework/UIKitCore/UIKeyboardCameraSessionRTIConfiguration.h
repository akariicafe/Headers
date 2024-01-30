@interface UIKeyboardCameraSessionRTIConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isWebKitInteractionView;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) BOOL shouldSuppressKeyboard;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
