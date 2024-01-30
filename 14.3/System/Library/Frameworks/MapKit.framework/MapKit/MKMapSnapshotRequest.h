@class NSString, VKMapSnapshotCreator, UIImage, MKMapSnapshotCreator;

@interface MKMapSnapshotRequest : NSObject {
    VKMapSnapshotCreator *_snapshotCreator;
}

@property (retain, nonatomic) id context;
@property (retain, nonatomic) id requester;
@property (retain, nonatomic) NSString *attributionString;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) unsigned long long zoomLevel;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (weak, nonatomic) MKMapSnapshotCreator *delegate;
@property (readonly, nonatomic) UIImage *image;

- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (void)start;

@end
