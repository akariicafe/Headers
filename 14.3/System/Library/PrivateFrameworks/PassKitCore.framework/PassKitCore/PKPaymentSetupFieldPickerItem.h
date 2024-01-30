@class NSString, DIAttributePickerItem;

@interface PKPaymentSetupFieldPickerItem : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *submissionValue;
@property (retain, nonatomic) DIAttributePickerItem *attributePickerItem;

+ (id)_itemWithDictionary:(id)a0;
+ (id)_itemWithDIAttributePickerItem:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 value:(id)a1;

@end
