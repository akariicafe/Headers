@class NSString;

@interface AMSDialogTextField : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) BOOL secure;
@property (nonatomic) long long tag;
@property (copy, nonatomic) NSString *text;

+ (id)textFieldWithPlaceholder:(id)a0 secure:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
