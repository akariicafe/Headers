@class NSString;

@interface BCSGeoDataParser : NSObject <BCSDataParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseString:(id)a0;
+ (id)_validateLatitudeAndLongitudeInString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;


@end
