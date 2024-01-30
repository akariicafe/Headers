@class NSString;

@interface SKUIAppDeviceConfig : NSObject <IKAppDeviceConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)timeZone;
- (id)systemLanguage;
- (struct CGSize { double x0; double x1; })screenSize;
- (unsigned long long)preferredVideoFormat;
- (id)storeFrontCountryCode;
- (unsigned long long)preferredVideoPreviewFormat;
- (BOOL)isTimeZoneSet;
- (id)currentSizeClasses;

@end
