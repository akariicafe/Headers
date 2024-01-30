@interface HFItemProviderUtilities : NSObject

+ (id)favoriteActionSetsForHome:(id)a0 withLimit:(unsigned long long)a1;
+ (id)favoriteServicesForHome:(id)a0 withLimit:(unsigned long long)a1;
+ (id)_legacyFavoriteServicesForHome:(id)a0 withLimit:(unsigned long long)a1;
+ (id)_servicesForHome:(id)a0 canShowInControlCentre:(BOOL)a1 withLimit:(unsigned long long)a2 includes:(unsigned long long)a3;
+ (id)nonFavoriteServicesForHome:(id)a0 withLimit:(unsigned long long)a1;
+ (id)predictionsPaddingFavoriteServicesForHome:(id)a0 withLimit:(unsigned long long)a1;
+ (id)predictionsPaddingNonFavoriteServicesForHome:(id)a0 withLimit:(unsigned long long)a1;

@end
