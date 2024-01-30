@class NSString, NSDate;

@interface MPModelRadioStationEvent : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSDate *startTime;
@property (copy, nonatomic) NSDate *endTime;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ heroArtworkCatalogBlock;

+ (long long)genericObjectType;
+ (id)__descriptionText_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__startTime_KEY;
+ (id)__endTime_KEY;
+ (id)__heroArtworkCatalogBlock_KEY;
+ (id)__title_KEY;

- (id)artworkCatalog;
- (id)heroArtworkCatalog;

@end
