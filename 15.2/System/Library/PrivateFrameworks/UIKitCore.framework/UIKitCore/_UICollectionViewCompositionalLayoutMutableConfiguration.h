@class NSArray, NSString;

@interface _UICollectionViewCompositionalLayoutMutableConfiguration : NSObject <_UICollectionViewCompositionalLayoutConfiguration, _UICollectionLayoutAPIRespresenting>

@property (nonatomic) long long scrollDirection;
@property (nonatomic) double interSectionSpacing;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfiguration;

@end
