@class NSString;

@interface CPContactMessageButton : CPButton

@property (readonly, copy, nonatomic) NSString *phoneOrEmail;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPhoneOrEmail:(id)a0;

@end
