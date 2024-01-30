@class PKPayLaterDynamicContentPageItem, NSString, NSArray, PKApplyFooterContent, PKCurrencyAmount, NSDictionary;

@interface PKPayLaterDynamicContentPage : NSObject {
    NSDictionary *_contentByIdentifier;
    NSDictionary *_productSectionByType;
}

@property (nonatomic) unsigned long long productType;
@property (copy, nonatomic) NSString *optionIdentifier;
@property (nonatomic) unsigned long long pageType;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *headerSubtitle;
@property (copy, nonatomic) NSString *altHeaderSubtitle;
@property (nonatomic) long long altHeaderSubtitleTimeInterval;
@property (copy, nonatomic) NSString *primaryActionTitle;
@property (copy, nonatomic) NSString *primaryActionIdentifier;
@property (copy, nonatomic) NSString *altPrimaryActionTitle;
@property (copy, nonatomic) NSString *altPrimaryActionIdentifier;
@property (copy, nonatomic) NSString *secondaryActionTitle;
@property (copy, nonatomic) NSString *secondaryActionIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *minimumAmount;
@property (retain, nonatomic) PKCurrencyAmount *maximumAmount;
@property (retain, nonatomic) PKPayLaterDynamicContentPageItem *contentItem;
@property (copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) PKApplyFooterContent *footerContent;

+ (id)_contentByIdentifierFromDictionary:(id)a0 pageType:(unsigned long long)a1;
+ (id)_productSectionByTypeFromDictionary:(id)a0 pageType:(unsigned long long)a1;
+ (id)keyForProductType:(unsigned long long)a0 optionIdentifier:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)dynamicContentPageForProductType:(unsigned long long)a0 optionIdentifier:(id)a1;
- (id)initWithDictionary:(id)a0 pageType:(unsigned long long)a1;
- (id)productSectionForType:(unsigned long long)a0;

@end
