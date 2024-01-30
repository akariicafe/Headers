@interface VSImageElementHelper : NSObject

@property (nonatomic) double deviceScale;
@property (nonatomic) long long currentUserInterfaceStyle;

- (id)init;
- (id)bestMatchingKeyForSrcset:(id)a0;
- (id)bestMatchingKeyForScale:(double)a0 withSuffix:(id)a1 inKeysSet:(id)a2;
- (id)matchingKeyForScale:(double)a0 withSuffix:(id)a1 inKeysSet:(id)a2;
- (id)keysForScale:(double)a0 withSuffix:(id)a1;

@end
