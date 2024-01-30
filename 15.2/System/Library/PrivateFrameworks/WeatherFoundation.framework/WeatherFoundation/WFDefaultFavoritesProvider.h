@class NSString;
@protocol WFFavoriteLocationProviderDelegate;

@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider>

@property (weak, nonatomic) id<WFFavoriteLocationProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addLocation:(id)a0;
- (void)setLocations:(id)a0;
- (id)locations;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)a0 persistence:(id)a1;
- (id)locationFromCity:(id)a0;
- (void)removeLocation:(id)a0;
- (BOOL)canProvideDefaultFavorites;

@end
