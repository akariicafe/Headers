@interface PGFeatureVector : PGGraph

+ (id)_imprecisePostalAddressFromPlacemark:(id)a0;
+ (id)_personForName:(id)a0;
+ (id)featureVectorWithLocalDate:(id)a0 location:(id)a1 peopleNames:(id)a2;
+ (id)featureVectorWithLocalDate:(id)a0 impreciseLocation:(id)a1 peopleNames:(id)a2;
+ (id)_featureVectorWithLocalDate:(id)a0 location:(id)a1 peopleNames:(id)a2 useImpreciseLocation:(BOOL)a3;
+ (id)featureVectorWithLocalDate:(id)a0 location:(id)a1 peopleUUIDs:(id)a2 inPhotoLibrary:(id)a3;
+ (id)_featureVectorWithLocalDate:(id)a0 location:(id)a1 peopleClues:(id)a2 useImpreciseLocation:(BOOL)a3;
+ (id)featureVectorWithCalendarEvent:(id)a0;
+ (id)featureVectorWithCalendarEvent:(id)a0 requiresLocation:(BOOL)a1 requiresPeople:(BOOL)a2;

@end
