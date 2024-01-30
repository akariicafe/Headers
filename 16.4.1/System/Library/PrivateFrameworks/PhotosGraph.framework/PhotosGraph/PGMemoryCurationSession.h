@class PGGraphLocationHelper, PGCurationManager, CLSCurationContext, PHPhotoLibrary;

@interface PGMemoryCurationSession : NSObject

@property (readonly, nonatomic) PGCurationManager *curationManager;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) CLSCurationContext *curationContext;
@property (readonly, nonatomic) PGGraphLocationHelper *locationHelper;

- (void).cxx_destruct;
- (id)initWithCurationManager:(id)a0 photoLibrary:(id)a1 curationContext:(id)a2 locationHelper:(id)a3;

@end
