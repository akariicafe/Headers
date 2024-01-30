@class NSString, TVRCKeyboardAttributes;

@interface _TVRCKeyboardState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEditing;
@property (copy, nonatomic) TVRCKeyboardAttributes *attributes;
@property (copy, nonatomic) NSString *text;

+ (id)keyboardStateFromDevice:(id)a0;

- (id)initWithDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
