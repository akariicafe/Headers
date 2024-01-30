@class NSString, WAStartMethod, WACellularRadioAccessTechnology, NSNumber, WALocationAccessData;

@interface WASessionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *utcOffset;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) WAStartMethod *startMethod;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) WALocationAccessData *locationAccess;
@property (readonly, nonatomic) WACellularRadioAccessTechnology *cellularRadioAccessTechnology;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithUtcOffset:(id)a0 languageCode:(id)a1 countryCode:(id)a2 startMethod:(id)a3 productType:(id)a4 locationAccess:(id)a5 cellularRadioAccessTechnology:(id)a6;

@end
