@class PKExtendedTraitCollection, NSString, NSObject;
@protocol PXPlacesMapGeotaggableInfoDelegate, OS_dispatch_queue;

@interface PXPlacesSnapshotOptions : NSObject

@property (retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection;
@property (retain, nonatomic) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInformationDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *cacheDirectoryPath;
@property (nonatomic) double visibleDistance;
@property (nonatomic) unsigned long long snapshotMapType;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) BOOL shouldSkipPlaceholder;
@property (nonatomic) BOOL showsPointLabels;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
