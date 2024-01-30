@class PHAsset, UIImage, NSDate;

@interface PXLinkPresentationConfiguration : NSObject

@property (retain, nonatomic) PHAsset *keyAsset;
@property (nonatomic) unsigned long long photoCount;
@property (nonatomic) unsigned long long videoCount;
@property (nonatomic) unsigned long long otherItemCount;
@property (copy, nonatomic) NSDate *earliestAssetDate;
@property (copy, nonatomic) NSDate *latestAssetDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) UIImage *placeholderImage;

- (void).cxx_destruct;
- (id)initWithKeyAsset:(id)a0;

@end
