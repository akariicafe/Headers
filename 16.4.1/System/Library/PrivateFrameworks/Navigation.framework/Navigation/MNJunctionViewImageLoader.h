@class NSArray;

@interface MNJunctionViewImageLoader : NSObject {
    NSArray *_preloadEvents;
    double _imageWidth;
    double _imageHeight;
}

- (void)setJunctionViewImageWidth:(double)a0 height:(double)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_imagesForIDs:(id)a0 handler:(id /* block */)a1;
- (id)_imagesForRequest:(id)a0 response:(id)a1;
- (id)_stringForImageIDs:(id)a0;
- (void)imagesForJunctionView:(id)a0 eventID:(id)a1 handler:(id /* block */)a2;
- (void)setJunctionViewEvents:(id)a0;
- (void)updateForLocation:(id)a0 remainingDistanceOnRoute:(double)a1;

@end
