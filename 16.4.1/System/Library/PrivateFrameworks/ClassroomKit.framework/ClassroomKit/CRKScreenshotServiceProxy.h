@class CRKValidXPCConnectionProvider;

@interface CRKScreenshotServiceProxy : NSObject <CRKScreenshotServiceInterface>

@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchScreenshotDataWithMaximumSizeInPixels:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)fetchScreenshotDataWithMaximumSizeInPixels:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
