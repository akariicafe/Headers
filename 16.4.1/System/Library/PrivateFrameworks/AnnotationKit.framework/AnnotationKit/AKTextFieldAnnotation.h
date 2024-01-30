@class NSString;

@interface AKTextFieldAnnotation : AKTextBoxAnnotation

@property (copy) NSString *fieldName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
