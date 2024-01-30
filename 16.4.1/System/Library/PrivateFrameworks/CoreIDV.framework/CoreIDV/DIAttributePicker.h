@class DIAttributePickerItem, NSArray;

@interface DIAttributePicker : DIAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) DIAttributePickerItem *defaultValue;
@property (copy, nonatomic) NSArray *pickerItems;
@property (copy, nonatomic, getter=getCurrentValue) DIAttributePickerItem *currentValue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
