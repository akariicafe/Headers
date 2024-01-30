@interface AAUIDataclassOption : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithActions:(id)a0;
- (id)initWithCoder:(id)a0;

@end
