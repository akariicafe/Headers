@class NSString;

@interface DIAttributePickerItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 value:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
