@class NSString, SUDescriptor;

@interface SUKeybagOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passcode;
@property (retain, nonatomic) SUDescriptor *descriptor;
@property (nonatomic) int keybagType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
