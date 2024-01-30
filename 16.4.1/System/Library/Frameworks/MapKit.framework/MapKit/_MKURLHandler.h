@protocol _MKURLHandlerDelegate;

@interface _MKURLHandler : NSObject

@property (weak, nonatomic) id<_MKURLHandlerDelegate> delegate;

+ (BOOL)canHandleURL:(id)a0;
+ (unsigned char)_MKGetURLSchemeTypeFor:(id)a0;

- (void).cxx_destruct;
- (BOOL)_treatNavigationDirectionsFrom:(id)a0;
- (BOOL)_handleMapItemHandlesURL:(id)a0 sourceApplication:(id)a1 context:(id)a2;
- (BOOL)_handleMapItemURL:(id)a0 sourceApplication:(id)a1 context:(id)a2;
- (BOOL)_handleMapItems:(id)a0 withOptions:(id)a1 url:(id)a2 sourceApplication:(id)a3 context:(id)a4;
- (BOOL)_handleMapsURL:(id)a0 sourceApplication:(id)a1 context:(id)a2;
- (BOOL)_handleSharedMapURL:(id)a0 sourceApplication:(id)a1 context:(id)a2;
- (BOOL)_treatAllCuratedCollectionsFrom:(id)a0;
- (BOOL)_treatCarDestinationsFrom:(id)a0;
- (BOOL)_treatCollectionFrom:(id)a0;
- (BOOL)_treatContentProvider:(id)a0;
- (BOOL)_treatCuratedCollectionFrom:(id)a0;
- (BOOL)_treatFavoritesFrom:(id)a0;
- (void)_treatGenericOptionsFrom:(id)a0;
- (void)_treatMapTypeFrom:(id)a0;
- (BOOL)_treatMuninViewStateFrom:(id)a0;
- (BOOL)_treatPinPositionFrom:(id)a0;
- (BOOL)_treatPublisherFrom:(id)a0;
- (BOOL)_treatRegionFrom:(id)a0;
- (BOOL)_treatSearchFrom:(id)a0;
- (BOOL)_treatSearchRegionFrom:(id)a0;
- (BOOL)_treatTesterFrom:(id)a0;
- (void)_treatTrackingModeFrom:(id)a0;
- (BOOL)_treatTransitLineFrom:(id)a0;
- (void)adjustOptionsForRAP:(id)a0 options:(id *)a1;
- (BOOL)handleURL:(id)a0 sourceApplication:(id)a1 context:(id)a2;

@end
