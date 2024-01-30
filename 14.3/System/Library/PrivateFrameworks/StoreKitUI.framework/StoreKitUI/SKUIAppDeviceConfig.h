@class NSString;

@interface SKUIAppDeviceConfig : NSObject <IKAppDeviceConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })screenSize;
- (id)timeZone;
- (id)systemLanguage;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (BOOL)isTimeZoneSet;
- (id)storeFrontCountryCode;
- (id)currentSizeClasses;

@end
