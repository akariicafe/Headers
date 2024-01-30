@class UIImage, NSString, NSCalendar, NSISO8601DateFormatter, NSDictionary, NSDate;

@interface SFDeviceRegulatoryAttributes : NSObject

@property (class, readonly, nonatomic) NSCalendar *_calendar;
@property (class, readonly, nonatomic) NSISO8601DateFormatter *_dateFormatter;
@property (class, readonly, copy, nonatomic) NSString *_weekCodeLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *_yearCodeToStartDateLookup;
@property (class, readonly, nonatomic) SFDeviceRegulatoryAttributes *currentDeviceAttributes;

@property (retain, nonatomic) NSDate *_resolvedManufacturingDate;
@property (retain, nonatomic) NSString *_resolvedIndiaBISNumber;
@property (retain, nonatomic) UIImage *_resolvedRegulatoryImage;
@property (retain, nonatomic) NSDate *_resolvedStartingWeek;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSString *indiaBISRegulatoryNumber;
@property (readonly, copy, nonatomic) UIImage *regulatoryImage;
@property (readonly, nonatomic) NSDate *manufacturingDate;
@property (readonly, nonatomic) unsigned long long yearForWeekOfManufacture;
@property (readonly, nonatomic) unsigned long long yearOfManufacture;
@property (readonly, nonatomic) unsigned long long monthOfManufacture;
@property (readonly, nonatomic) unsigned long long weekOfManufacture;
@property (readonly, copy, nonatomic) NSString *plantCode;

+ (id)getRegulatoryAttributes;

- (void).cxx_destruct;
- (void)_resolveDeviceAttributes:(id)a0;
- (void)_resolveIndiaBISRegulatoryNumber:(id)a0;
- (void)_resolveManufacturingDateRelatedFields:(id)a0;
- (void)_resolveRegulatoryImage:(id)a0;
- (id)initWithRegulatoryAttributes:(id)a0 serialNumber:(id)a1;

@end
