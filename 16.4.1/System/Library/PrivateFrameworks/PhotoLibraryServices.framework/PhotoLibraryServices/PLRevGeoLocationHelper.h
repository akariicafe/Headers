@interface PLRevGeoLocationHelper : NSObject

+ (BOOL)isAutoNaviCountryCode:(id)a0;
+ (BOOL)isAutoNaviRevGeoProvider:(id)a0;
+ (id)autoNaviProviderID;
+ (id)currentRevGeoProvider;
+ (id)autoNaviCountryCode;
+ (id)appleProviderID;
+ (BOOL)isCurrentRevGeoProviderAutoNavi;
+ (void)simulateAutoNaviForBlock:(id /* block */)a0;

@end
