@class PKPassPersonalization, NSString, NSArray, NSDictionary, PKPassBarcodeSettings;

@interface PKPassContent : PKContent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long transitType;
@property (copy, nonatomic) NSString *logoText;
@property (copy, nonatomic) NSArray *frontFieldBuckets;
@property (copy, nonatomic) NSArray *backFieldBuckets;
@property (copy, nonatomic) NSArray *passDetailSections;
@property (copy, nonatomic) NSArray *balanceFields;
@property (copy, nonatomic) PKPassPersonalization *personalization;
@property (copy, nonatomic) NSDictionary *semantics;
@property (copy, nonatomic) NSDictionary *allSemantics;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (retain, nonatomic) PKPassBarcodeSettings *barcodeSettings;
@property (copy, nonatomic) NSString *cardholderInfoSectionTitle;
@property (readonly, nonatomic) NSArray *primaryFields;

- (void)flushFormattedFieldValues;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 privateBundle:(id)a2;

@end
