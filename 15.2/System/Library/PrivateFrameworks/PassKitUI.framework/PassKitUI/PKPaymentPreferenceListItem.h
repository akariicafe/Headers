@class PKPaymentPreference;

@interface PKPaymentPreferenceListItem : NSObject <NSCopying>

@property (readonly, nonatomic) PKPaymentPreference *sectionPreference;

- (id)_text;
- (id)_image;
- (id)configuration;
- (void).cxx_destruct;
- (id)_secondaryText;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_internalConfiguration;
- (BOOL)supportsSwipeActionType:(int)a0;
- (id)defaultAccessories;
- (BOOL)isOptionItem;
- (BOOL)supportsInlineEditing;
- (BOOL)isAddItem;
- (id)initWithSectionPreference:(id)a0;

@end
