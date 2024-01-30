@class PRSPosterSnapshot;

@interface PBFPosterSnapshotContainer : NSObject {
    struct CGImageBlockSet { } *_imageBlockSet;
}

@property (readonly, nonatomic) PRSPosterSnapshot *posterSnapshot;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPosterSnapshot:(id)a0 imageBlockSet:(struct CGImageBlockSet { } *)a1;

@end
