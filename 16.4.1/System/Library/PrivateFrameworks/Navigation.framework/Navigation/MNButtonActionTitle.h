@class NSString;

@interface MNButtonActionTitle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) int buttonDisplay;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAction:(unsigned long long)a0 withTitle:(id)a1 buttonDisplay:(int)a2;

@end
