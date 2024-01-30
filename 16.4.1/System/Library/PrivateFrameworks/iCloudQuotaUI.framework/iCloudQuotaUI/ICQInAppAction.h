@class NSString;

@interface ICQInAppAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)performAction;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)performActionWithContext:(id)a0;
- (id)initWithTitle:(id)a0 type:(id)a1;

@end
