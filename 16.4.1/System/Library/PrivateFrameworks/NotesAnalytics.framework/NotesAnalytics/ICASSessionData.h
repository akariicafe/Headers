@class NSString, ICASCellularRadioAccessTechnology, NSArray, NSNumber;

@interface ICASSessionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *utcOffset;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) ICASCellularRadioAccessTechnology *cellularRadioAccessTechnology;
@property (readonly, nonatomic) NSNumber *bioAuthEnabled;
@property (readonly, nonatomic) NSNumber *localNotesEnabled;
@property (readonly, nonatomic) NSArray *accountTypeSummary;
@property (readonly, nonatomic) NSString *sessionType;
@property (readonly, nonatomic) NSNumber *isSaltRegenerated;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithUtcOffset:(id)a0 countryCode:(id)a1 languageCode:(id)a2 productType:(id)a3 cellularRadioAccessTechnology:(id)a4 bioAuthEnabled:(id)a5 localNotesEnabled:(id)a6 accountTypeSummary:(id)a7 sessionType:(id)a8 isSaltRegenerated:(id)a9;

@end
