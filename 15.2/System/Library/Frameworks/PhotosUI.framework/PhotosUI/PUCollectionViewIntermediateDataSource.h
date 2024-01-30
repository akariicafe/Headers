@class NSString;
@protocol UICollectionViewDataSource;

@interface PUCollectionViewIntermediateDataSource : NSObject <UICollectionViewDataSource>

@property (nonatomic) id<UICollectionViewDataSource> realDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
