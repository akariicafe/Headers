@interface GCKeyboardEventData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned short keyCode;
@property BOOL pressed;
@property unsigned long long senderID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;

@end
