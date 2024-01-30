@class NSString;

@interface AMSPaymentSheetRatingImage : NSObject

@property (readonly, copy, nonatomic) NSString *localAssetName;
@property (readonly, nonatomic) long long ratingType;
@property (readonly, nonatomic, getter=isServerSupplied) BOOL serverSupplied;
@property (readonly, nonatomic) BOOL tint;
@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSString *value;

- (void).cxx_destruct;
- (long long)_ratingTypeForType:(id)a0;
- (id)initWithURLString:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
