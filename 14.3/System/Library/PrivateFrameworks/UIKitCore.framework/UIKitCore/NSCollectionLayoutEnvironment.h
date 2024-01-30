@class NSString, UITraitCollection;
@protocol NSCollectionLayoutContainer, _UIDataSourceSnapshot;

@interface NSCollectionLayoutEnvironment : NSObject <NSCollectionLayoutEnvironment_Private>

@property (retain, nonatomic) id<NSCollectionLayoutContainer> container;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) id<_UIDataSourceSnapshot> _dataSourceSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 traitCollection:(id)a1 dataSourceSnapshot:(id)a2;

@end
