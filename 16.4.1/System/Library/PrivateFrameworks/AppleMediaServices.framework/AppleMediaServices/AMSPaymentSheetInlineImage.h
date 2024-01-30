@class NSString;
@protocol AMSPaymentSheetAssetConfiguration;

@interface AMSPaymentSheetInlineImage : NSObject

@property (readonly, nonatomic) id<AMSPaymentSheetAssetConfiguration> localAssetConfiguration;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic, getter=isServerSupplied) BOOL serverSupplied;
@property (readonly, nonatomic) BOOL tint;
@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSString *value;

+ (id)textEncapsulationForServerValue:(id)a0;

- (id)initWithURLString:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (long long)_defaultAssetType;
- (id)_imageAssetConfigurationForDictionary:(id)a0;
- (long long)_ratingTypeForType:(id)a0;
- (long long)_scaleForString:(id)a0;
- (id)_symbolAssetConfigurationForDictionary:(id)a0;

@end
