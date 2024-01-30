@class SKUIImageViewElement, IKViewElementStyle, NSString, SKUIStoreIdentifier, IKDOMElement, SKUIBuyButtonDescriptor, SKUIViewElementText;

@interface SKUIButtonViewElement : SKUIViewElement {
    SKUIViewElementText *_buttonText;
    char _enabled;
    NSString *_toggleItemIdentfier;
    IKDOMElement *_xml;
}

@property (retain, nonatomic) SKUIBuyButtonDescriptor *buyButtonDescriptor;
@property (readonly, nonatomic) BOOL autoIncrementCount;
@property (readonly, nonatomic, getter=isBigHitButton) BOOL bigHitButton;
@property (readonly, nonatomic) double bigHitSize;
@property (readonly, nonatomic) long long buttonViewType;
@property (readonly, nonatomic) long long buttonViewSubType;
@property (readonly, nonatomic) SKUIViewElementText *buttonText;
@property (readonly, nonatomic) IKViewElementStyle *buttonTitleStyle;
@property (readonly, nonatomic) NSString *confirmationText;
@property (readonly, nonatomic) NSString *nonToggledText;
@property (readonly, nonatomic) NSString *toggledText;
@property (readonly, nonatomic) NSString *badgeResourceName;
@property (readonly, nonatomic) SKUIImageViewElement *buttonImage;
@property (readonly, nonatomic) SKUIImageViewElement *additionalButtonImage;
@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) SKUIStoreIdentifier *storeIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long dataPlaybackId;
@property (readonly, nonatomic) NSString *playItemIdentifier;
@property (readonly, nonatomic) NSString *sizeVariant;
@property (readonly, nonatomic) BOOL showOnDemand;
@property (readonly, nonatomic) NSString *toggleItemIdentifier;
@property (readonly, nonatomic) NSString *variantIdentifier;
@property (readonly, nonatomic, getter=isDisabledButSelectable) BOOL disabledButSelectable;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isToggled) BOOL toggled;
@property (readonly, nonatomic) BOOL suppressCloudRestore;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)elementType;
- (id)description;
- (BOOL)isEnabled;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;
- (long long)pageComponentType;
- (id)personalizationLibraryItems;
- (id)_parseButtonText;

@end
