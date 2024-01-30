@class UIImage, MKMapSnapshot;

@interface MKLookAroundSnapshot : NSObject {
    MKMapSnapshot *_snapshot;
}

@property (readonly, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (id)initWithSnapshot:(id)a0;

@end
