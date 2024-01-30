@class NSString, NSURL, IKAssetElement, NSNumber;

@interface TVAssetElement : TVViewElement

@property (readonly, nonatomic) IKAssetElement *assetElement;
@property (readonly, nonatomic) NSString *actionParams;
@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSURL *extrasURL;
@property (readonly, nonatomic) unsigned long long keyDelivery;
@property (readonly, nonatomic) NSNumber *persistentID;
@property (readonly, nonatomic) NSNumber *rentalAdamID;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSURL *url;

- (BOOL)isEqual:(id)a0;

@end
