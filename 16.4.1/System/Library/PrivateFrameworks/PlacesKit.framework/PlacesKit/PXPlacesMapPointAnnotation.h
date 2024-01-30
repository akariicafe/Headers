@class NSString, NSOrderedSet;
@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

@interface PXPlacesMapPointAnnotation : NSObject <MKAnnotation, PXPlacesMapRenderable>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<PXPlacesMapRenderer> renderer;
@property (weak) id<PXPlacesMapSelectionHandler> selectionHandler;
@property (retain) NSOrderedSet *geotaggables;
@property (nonatomic) long long index;

- (void).cxx_destruct;

@end
