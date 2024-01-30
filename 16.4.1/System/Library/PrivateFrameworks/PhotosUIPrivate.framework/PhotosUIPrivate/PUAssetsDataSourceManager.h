@class PUAssetsDataSource;
@protocol PUAssetsDataSourceManagerDelegate;

@interface PUAssetsDataSourceManager : NSObject

@property (retain, nonatomic) PUAssetsDataSource *assetsDataSource;
@property (weak, nonatomic) id<PUAssetsDataSourceManagerDelegate> delegate;

- (void).cxx_destruct;

@end
