@interface PLRevGeoLocationHelper : NSObject

+ (id)appleProviderID;
+ (BOOL)isAutoNaviCountryCode:(id)a0;
+ (void)simulateAutoNaviForBlock:(id /* block */)a0;
+ (BOOL)isCurrentRevGeoProviderAutoNavi;
+ (id)currentRevGeoProvider;
+ (id)autoNaviCountryCode;
+ (id)autoNaviProviderID;
+ (BOOL)isAutoNaviRevGeoProvider:(id)a0;

@end
