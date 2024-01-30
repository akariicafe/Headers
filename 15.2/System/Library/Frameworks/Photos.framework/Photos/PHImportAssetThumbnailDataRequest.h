@interface PHImportAssetThumbnailDataRequest : PHImportAssetDataRequest

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) unsigned long long longestSide;
@property (readonly, nonatomic) unsigned char priority;

- (id)description;
- (void).cxx_destruct;
- (id)requestAsset;
- (id)initWithAsset:(id)a0 longestSide:(unsigned long long)a1 priority:(unsigned char)a2;

@end
