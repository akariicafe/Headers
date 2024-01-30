@class NSArray;

@interface PKPickerContactFieldConfiguration : PKContactFieldConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *pickerItems;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
