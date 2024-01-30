@class NSCache;

@interface NDOImageManager : NSObject

@property (class, readonly) NDOImageManager *sharedManager;

@property (retain, nonatomic) NSCache *imageCache;

- (id)initPrivate;
- (void)resetCache;
- (void).cxx_destruct;
- (id)fetchImageWithURLString:(id)a0 completion:(id /* block */)a1;

@end
