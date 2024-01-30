@class DIAttributePickerItem, NSArray;

@interface DIAttributePicker : DIAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) DIAttributePickerItem *defaultValue;
@property (copy, nonatomic) NSArray *pickerItems;
@property (copy, nonatomic, getter=getCurrentValue) DIAttributePickerItem *currentValue;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
