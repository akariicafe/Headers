@class NSString;

@interface CPContactMessageButton : CPButton

@property (readonly, copy, nonatomic) NSString *phoneOrEmail;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPhoneOrEmail:(id)a0;

@end
