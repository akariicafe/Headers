@class NSString, PCNativeButtonStyle;

@interface PCNativeButton : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *accessibleText;
@property (retain, nonatomic) PCNativeButtonStyle *style;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
