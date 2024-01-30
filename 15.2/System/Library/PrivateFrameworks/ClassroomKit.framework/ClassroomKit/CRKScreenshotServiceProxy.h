@class CRKValidXPCConnectionProvider;

@interface CRKScreenshotServiceProxy : NSObject <CRKScreenshotServiceInterface>

@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider;

- (void).cxx_destruct;
- (id)init;
- (void)_fetchScreenshotDataWithMaximumSizeInPixels:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)fetchScreenshotDataWithMaximumSizeInPixels:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
