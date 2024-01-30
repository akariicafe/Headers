@class NSOperationQueue, NSString;

@interface VSAppDeviceConfig : NSObject <IKAppDeviceConfig>

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)timeZone;
- (id)systemLanguage;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })screenSize;
- (unsigned long long)preferredVideoFormat;
- (id)storeFrontCountryCode;
- (unsigned long long)preferredVideoPreviewFormat;
- (BOOL)isTimeZoneSet;

@end
