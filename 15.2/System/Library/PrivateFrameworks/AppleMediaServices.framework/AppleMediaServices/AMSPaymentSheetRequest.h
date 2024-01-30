@class NSString, NSURL, NSArray, AMSBiometricsSignatureRequest, NSAttributedString, NSDictionary, ACAccount, NSNumber;

@interface AMSPaymentSheetRequest : NSObject

@property (readonly, nonatomic) unsigned long long ams_confirmationStyle;
@property (readonly, nonatomic) unsigned long long ams_paymentRequestorType;
@property (nonatomic) BOOL isDelegateAuthentication;
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (copy, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *accountHeader;
@property (nonatomic, getter=isApplePayClassic) BOOL applePayClassic;
@property (copy, nonatomic) NSArray *attributedList;
@property (retain, nonatomic) AMSBiometricsSignatureRequest *biometricsRequest;
@property (nonatomic) long long confirmationTitle;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *delegateAuthenticateChallenge;
@property (copy, nonatomic) NSString *displayPrice;
@property (copy, nonatomic) NSString *explanation;
@property (copy, nonatomic) NSArray *flexList;
@property (retain, nonatomic) NSArray *inlineImages;
@property (retain, nonatomic) NSString *logKey;
@property (copy, nonatomic) NSDictionary *merchantSession;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long payee;
@property (copy, nonatomic) NSString *paymentSession;
@property (copy, nonatomic) NSString *paymentSummary;
@property (copy, nonatomic) NSArray *preSheetDialog;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSArray *priceSectionItems;
@property (copy, nonatomic) NSString *ratingHeader;
@property (copy, nonatomic) NSString *ratingValue;
@property (nonatomic) BOOL requiresAuthorization;
@property (readonly, nonatomic) BOOL requiresDelegateAuthentication;
@property (nonatomic) long long salableIcon;
@property (copy, nonatomic) NSURL *salableIconURL;
@property (copy, nonatomic) NSArray *salableInfo;
@property (copy, nonatomic) NSAttributedString *salableInfoLabel;
@property (nonatomic) BOOL shouldUppercaseText;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titleType;
@property (copy, nonatomic) NSString *userAgent;

+ (id)attributedStringByRemovingPlaceholderTagsFromAttributedString:(id)a0;

- (id)_summaryItemsForAttributedList:(id)a0 assetCache:(id)a1 bag:(id)a2;
- (id)_contentItemsForFlexibleList:(id)a0 assetCache:(id)a1 bag:(id)a2;
- (struct CGImage { } *)_createImageRefWithURL:(id)a0 adornmentStyle:(long long)a1 bag:(id)a2;
- (unsigned long long)_countImagePlaceholderTags:(id)a0;
- (struct CGImage { } *)_createRatingImageWithStringValue:(id)a0 assetScale:(float *)a1;
- (struct CGImage { } *)_createImageForResourceName:(id)a0 outAssetScale:(float *)a1;
- (id)_replaceImagePlaceholderTagWithImageData:(id)a0 tag:(id)a1 data:(id)a2 scale:(float)a3 tint:(BOOL)a4;
- (struct CGImage { } *)_createImageRefForImageURL:(id)a0 outAssetScale:(float *)a1;
- (struct CGImage { } *)_createImageMaskRefWithSize:(struct CGSize { double x0; double x1; })a0 andPath:(struct CGPath { } *)a1;
- (struct CGImage { } *)_createImageRefForImageSource:(struct CGImageSource { } *)a0 screenScale:(float)a1 outAssetScale:(float *)a2;
- (long long)_imageTypeForURL:(id)a0;
- (struct CGPath { } *)_createBorderPathForAdornmentStyle:(long long)a0 iconWidth:(double)a1 iconHeight:(double)a2;
- (struct CGImage { } *)_createDefaultImageWithImageRef:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 borderPath:(struct CGPath { } *)a2;
- (id)ams_createSummaryItems;
- (struct CGImage { } *)_createMaskedImageRefForImageRef:(struct CGImage { } *)a0 withPathRef:(struct CGPath { } *)a1 andAdornmentStyle:(long long)a2;
- (struct CGImage { } *)_createRGBImageRefForGreyScaleImageRef:(struct CGImage { } *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (id)ams_createSummaryItemsForAttributedListWithAssetCache:(id)a0 bag:(id)a1;
- (id)ams_createContentItemForAccount;
- (id)ams_createContentItemForRating;
- (id)ams_createContentItemsForFlexibleListWithAssetCache:(id)a0 bag:(id)a1;
- (id)ams_createContentItemsForPreScreenDialogWithAssetCache:(id)a0 bag:(id)a1;
- (id)ams_createContentItemForSalableInfoWithAssetCache:(id)a0 bag:(id)a1;
- (void).cxx_destruct;

@end
