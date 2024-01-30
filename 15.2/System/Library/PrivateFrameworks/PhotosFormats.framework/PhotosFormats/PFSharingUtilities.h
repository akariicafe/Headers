@interface PFSharingUtilities : NSObject

+ (id)_exifSubsecTimeFormatter;
+ (id)_exifDateTimeFormatter;
+ (id)_dateFormatterTemplate;
+ (id)_gpsTimeFormatter;
+ (id)_gpsDateFormatter;
+ (id)addAccessibilityDescription:(id)a0 toAVMetadata:(id)a1;
+ (id)addDescription:(id)a0 toAVMetadata:(id)a1;
+ (id)setString:(id)a0 forKey:(id)a1 inKeySpace:(id)a2 inAVMetadata:(id)a3;
+ (id)addCustomDate:(id)a0 toAVMetadata:(id)a1;
+ (id)addCustomLocation:(id)a0 toAVMetadata:(id)a1;
+ (id)gpsDictionaryForLocation:(id)a0;
+ (id)exifDateTimeFromDate:(id)a0;
+ (id)exifSubsecTimeFromDate:(id)a0;
+ (id)addCreationDate:(id)a0 toExifDictionary:(id)a1;
+ (id)addCreationDate:(id)a0 toTIFFDictionary:(id)a1;

@end
