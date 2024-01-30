@class NSArray, NSString;

@interface UICollectionViewCompositionalLayoutConfiguration : NSObject <_UICollectionViewCompositionalLayoutConfiguration, NSCopying>

@property (nonatomic, getter=_safeAreaReference, setter=_setSafeAreaReference:) long long safeAreaReference;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) double interSectionSpacing;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) long long contentInsetsReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScrollDirection:(long long)a0 interSectionSpacing:(double)a1 boundarySupplememtaryItems:(id)a2 contentInsetsReference:(long long)a3;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)differencesFromConfiguration:(id)a0;

@end
