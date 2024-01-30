@interface PLRevGeoLocationHelper : NSObject

+ (id)appleProviderID;
+ (id)currentRevGeoProvider;
+ (BOOL)isAutoNaviCountryCode:(id)a0;
+ (id)autoNaviProviderID;
+ (BOOL)isCurrentRevGeoProviderAutoNavi;
+ (id)autoNaviCountryCode;
+ (BOOL)isAutoNaviRevGeoProvider:(id)a0;
+ (void)simulateAutoNaviForBlock:(id /* block */)a0;

@end
