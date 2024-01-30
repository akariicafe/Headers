@class NSString, SBSnapshotDataProviderContext, UIImage;

@interface SBUIImageDataProvider : NSObject <XBSnapshotDataProvider> {
    UIImage *_image;
    double _scaleFactor;
}

@property (readonly, retain, nonatomic) SBSnapshotDataProviderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchImageForFormat:(long long)a0;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 context:(id)a1 scaleFactor:(double)a2;

@end
