@interface PUAssetPickerAsyncCellConfigurator : NSObject

+ (void)cancelImageRequestForCell:(id)a0 imageManager:(id)a1;
+ (void)configureCountForCell:(id)a0 asyncRequestID:(id)a1 assetCollection:(id)a2 fetchOptions:(id)a3 countManager:(id)a4;
+ (void)configureImageForCell:(id)a0 asyncRequestID:(id)a1 asset:(id)a2 imageManager:(id)a3;

- (id)init;

@end
