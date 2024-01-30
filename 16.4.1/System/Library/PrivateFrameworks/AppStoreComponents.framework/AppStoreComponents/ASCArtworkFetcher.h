@class ASCTaskCoordinator, NSURLSession;

@interface ASCArtworkFetcher : NSObject

@property (class, readonly) ASCArtworkFetcher *sharedFetcher;

@property (readonly, nonatomic) NSURLSession *urlSession;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) ASCTaskCoordinator *fetchCoordinator;

- (id)dataWithContentsOfURL:(id)a0;
- (id)imageWithContentsOfURL:(id)a0;
- (void).cxx_destruct;
- (id)URLWithContentsOfArtwork:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;
- (id)imageForContentsOfArtwork:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithURLSession:(id)a0 scale:(double)a1;

@end
