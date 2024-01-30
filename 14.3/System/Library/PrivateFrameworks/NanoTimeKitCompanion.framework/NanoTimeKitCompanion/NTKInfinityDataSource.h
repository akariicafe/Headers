@class NSArray, CLKDevice;

@interface NTKInfinityDataSource : NSObject {
    CLKDevice *_device;
    NSArray *_listings;
}

@property (nonatomic) long long numberOfTotalActions;
@property (nonatomic) long long numberOfTotalMagicMoments;

+ (id)buzzColor;
+ (id)woodyColor;
+ (id)jessieColor;
+ (id)ballColor;
+ (id)hangGliderColor;
+ (id)bullseyeColor;
+ (id)supportingCastColor;
+ (id)rexColor;
+ (id)hammColor;
+ (id)alienColor;
+ (id)spotlightColor;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;
- (id)listingsOfTypes:(id)a0 withAttributes:(id)a1 recentlyUsed:(id)a2;
- (id)listingsForCharacter:(unsigned long long)a0 ofTypes:(id)a1 withAttributes:(id)a2 recentlyUsed:(id)a3;
- (id)listingsForCharacter:(unsigned long long)a0;
- (void)_loadCharacters;
- (void)_countListings;

@end
