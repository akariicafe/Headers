@class NSLock, NSString, NSArray, NSDictionary, NSURL, NSNumber, NSAttributedString;

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
@property (copy) NSNumber *designVersion;
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
@property (copy, nonatomic) NSString *presentingSceneIdentifier;
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
@property (copy) NSArray *styles;
@property (copy) NSString *title;
@property long long titleType;

+ (id)_styleDictionaryWithName:(id)a0 styles:(id)a1;
+ (id)_attributedStringWithString:(id)a0 styles:(id)a1;
+ (id)stringWithFormattedUsernameForString:(id)a0 username:(id)a1;

- (void)_unlock;
- (id)initWithXPCEncoding:(id)a0;
- (id)initWithServerResponse:(id)a0;
- (void)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (void)_lock;
- (id)init;
- (void).cxx_destruct;
- (id)_greyAttributedStringForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_replaceBreakingSpaceMarkupForMutableAttributedString:(id)a0;
- (id)_replaceMarkupForMutableAttributedString:(id)a0 markupType:(long long)a1;
- (void)_parseResponse:(id)a0;
- (id)_attributedListForFlexList:(id)a0;
- (id)_attributedStringForAttributedArray:(id)a0;
- (id)_attributedStringForAttributedDictionary:(id)a0;
- (id)_attributedStringForSalableInfoStringArray:(id)a0;
- (id)_attributedStringForString:(id)a0;
- (id)_attributedStringForStringArray:(id)a0 useGrey:(BOOL)a1;
- (long long)_confirmationTitleTypeForStringValue:(id)a0;
- (id)_displayPriceLabelForDisplayPrice:(id)a0;
- (long long)_inferSalableIconTypeWithBuyParams:(id)a0;
- (long long)_payeeTypeForRequestorValue:(id)a0;
- (long long)_payeeTypeInferredFromEnumeratedTitle;
- (long long)_salableIconTypeForString:(id)a0;
- (void)_salableInfoItemsToUppercase;
- (void)_stringValuesToUppercase;
- (id)authKitAuthenticationContextForAccount:(id)a0;
- (id)defaultAuthKitAuthenticationContext;
- (id)initWithServerResponse:(id)a0 buyParams:(id)a1;

@end
