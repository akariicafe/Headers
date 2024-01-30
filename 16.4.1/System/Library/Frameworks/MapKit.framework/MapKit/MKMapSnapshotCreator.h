@class NSMutableArray, NSString, UIImage, NSLock, MKMapSnapshotRequest;

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate> {
    UIImage *_lastSnapshot;
    NSString *_lastAttributionString;
    NSLock *_requestLock;
    NSMutableArray *_requests;
}

@property (retain, nonatomic) MKMapSnapshotRequest *servingRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSharingThumbnails;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_processRequest;
- (id)_newSnapshotWithView:(id)a0;
- (void)_respondWithSnapshot;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 handler:(id /* block */)a3;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 requester:(id)a3 context:(id)a4;
- (void)flushRequestQueue;
- (id)recreateCurrentSnapshotWithRequester:(id)a0 context:(id)a1;

@end
