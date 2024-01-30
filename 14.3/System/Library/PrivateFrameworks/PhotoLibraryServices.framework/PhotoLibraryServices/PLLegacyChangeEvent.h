@interface PLLegacyChangeEvent : NSObject

+ (id)localChangeEventFromChangeHubEvent:(id)a0 withPhotoLibrary:(id)a1;
+ (BOOL)isEmptyEvent:(id)a0;
+ (id)_descriptionForEvent:(id)a0;
+ (id)_descriptionForEvent:(id)a0 withPhotoLibrary:(id)a1;

@end
