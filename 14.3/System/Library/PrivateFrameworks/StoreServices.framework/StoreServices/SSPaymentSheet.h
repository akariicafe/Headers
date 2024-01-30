@class NSLock, NSString, NSArray, NSDictionary, NSURL, NSAttributedString, NSNumber;

@interface SSPaymentSheet : NSObject <NSCopying> {
    NSLock *_lock;
}

@property (copy) NSString *accountHeader;
@property (copy) NSString *accountName;
@property (readonly) NSArray *attributedList;
@property (readonly, copy) NSString *buyParams;
@property long long confirmationTitleType;
@property (copy) NSString *countryCode;
@property (copy) NSString *currencyCode;
@property (copy) NSString *dialogId;
@property (copy) NSString *displayPrice;
@property (readonly, copy) NSAttributedString *displayPriceLabel;
@property (copy) NSString *explanation;
@property (readonly) NSArray *flexList;
@property (readonly, copy) NSArray *inlineImages;
@property (getter=isApplePayClassic) BOOL applePayClassic;
@property (copy) NSDictionary *merchantSession;
@property (copy) NSString *message;
@property long long payeeType;
@property (copy) NSString *paymentSummary;
@property (copy) NSNumber *price;
@property (copy) NSArray *priceSectionItems;
@property (copy) NSString *ratingHeader;
@property (copy) NSString *ratingValue;
@property long long salableIconType;
@property (readonly, copy) NSURL *salableIconURL;
@property (copy) NSString *salableIconURLString;
@property (copy) NSArray *salableInfo;
@property (readonly, copy) NSAttributedString *salableInfoLabel;
@property BOOL shouldShowCardPicker;
@property BOOL shouldSuppressPrice;
@property BOOL shouldUppercaseText;
@property (copy) NSString *storeName;
@property (copy) NSString *title;
@property long long titleType;

+ (id)stringWithFormattedUsernameForString:(id)a0 username:(id)a1;

- (void)_unlock;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_parseResponse:(id)a0;
- (long long)_inferSalableIconTypeWithBuyParams:(id)a0;
- (id)_displayPriceLabelForDisplayPrice:(id)a0;
- (id)_attributedStringForSalableInfoStringArray:(id)a0;
- (void)_salableInfoItemsToUppercase;
- (id)_attributedStringForString:(id)a0;
- (id)_attributedStringForAttributedDictionary:(id)a0;
- (long long)_payeeTypeForRequestorValue:(id)a0;
- (long long)_payeeTypeInferredFromEnumeratedTitle;
- (long long)_salableIconTypeForString:(id)a0;
- (long long)_confirmationTitleTypeForStringValue:(id)a0;
- (id)_attributedStringForStringArray:(id)a0 useGrey:(BOOL)a1;
- (id)_attributedListForFlexList:(id)a0;
- (void)_stringValuesToUppercase;
- (id)_attributedStringForAttributedArray:(id)a0;
- (id)defaultAuthKitAuthenticationContext;
- (id)initWithServerResponse:(id)a0 buyParams:(id)a1;
- (id)_greyAttributedStringForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_init;
- (void)_lock;
- (id)initWithServerResponse:(id)a0;
- (id)_replaceMarkupForMutableAttributedString:(id)a0 markupType:(long long)a1;
- (id)_replaceBreakingSpaceMarkupForMutableAttributedString:(id)a0;

@end
