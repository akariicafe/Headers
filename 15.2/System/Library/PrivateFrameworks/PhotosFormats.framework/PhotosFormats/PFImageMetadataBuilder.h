@class NSDictionary, NSMutableDictionary;

@interface PFImageMetadataBuilder : PFMetadataBuilder

@property (retain, nonatomic) NSMutableDictionary *iptcMutableDictionary;
@property (retain, nonatomic) NSMutableDictionary *exifMutableDictionary;
@property (retain, nonatomic) NSMutableDictionary *tiffMutableDictionary;
@property (readonly, copy, nonatomic) NSDictionary *iptcDictionary;
@property (readonly, copy, nonatomic) NSDictionary *exifDictionary;
@property (readonly, copy, nonatomic) NSDictionary *tiffDictionary;

+ (id)_exifTimeZoneOffsetFormatter;
+ (id)_exifSubsecTimeFormatter;
+ (id)_exifDateTimeFormatter;
+ (id)iptcTimeFormatter;
+ (id)iptcDateFormatter;
+ (id)_dateFormatterTemplate;
+ (id)_gpsTimeFormatter;
+ (id)_gpsDateFormatter;

- (void)setCaption:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setAccessibilityDescription:(id)a0;
- (void)setPeopleNames:(id)a0;
- (void)setTitle:(id)a0;
- (void)setKeywords:(id)a0;
- (void)setCreationDate:(id)a0 timeZone:(id)a1;
- (void)_updateCreationDate;

@end
