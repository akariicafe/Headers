@class NSSet;

@interface _UICollectionViewListLayoutVisualProvider : NSObject {
    long long _appearanceStyle;
}

@property (readonly, nonatomic) NSSet *defaultFloatingElementKinds;

+ (id)visualProviderForAppearanceStyle:(long long)a0;

- (id)initWithAppearanceStyle:(long long)a0;
- (void)configureDefaultGradientMaskOnLayout:(id)a0;

@end
