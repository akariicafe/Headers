@class NSString;

@interface SKUIAppDeviceConfig : NSObject <IKAppDeviceConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })screenSize;
- (unsigned long long)preferredVideoFormat;
- (id)timeZone;
- (id)systemLanguage;
- (id)currentSizeClasses;
- (BOOL)isTimeZoneSet;
- (unsigned long long)preferredVideoPreviewFormat;
- (id)storeFrontCountryCode;

@end
