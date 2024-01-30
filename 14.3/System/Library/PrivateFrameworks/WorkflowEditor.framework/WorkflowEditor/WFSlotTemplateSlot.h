@class NSString, NSAttributedString, WFSlotIdentifier;

@interface WFSlotTemplateSlot : NSObject <WFSlotTemplateContent, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) WFSlotIdentifier *identifier;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly, nonatomic, getter=isPopulated) BOOL populated;
@property (copy, nonatomic) NSAttributedString *contentAttributedString;
@property (nonatomic) BOOL prefersNoWrapping;
@property (nonatomic) BOOL standaloneTextAttachment;
@property (nonatomic) long long userInputInsertionIndex;

+ (id)slotWithLocalizedName:(id)a0 localizedPlaceholder:(id)a1 key:(id)a2;
+ (id)addingSlotWithKey:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)populateWithIcon:(id)a0 string:(id)a1;
- (void)populateWithVariable:(id)a0;
- (void)populateWithString:(id)a0;
- (void)populateWithVariableString:(id)a0 askVariableName:(id)a1;
- (id)initWithLocalizedName:(id)a0 localizedPlaceholder:(id)a1 identifier:(id)a2;

@end
