@interface VSImageElementHelper : NSObject

@property (nonatomic) double deviceScale;
@property (nonatomic) long long currentUserInterfaceStyle;

- (id)init;
- (id)bestMatchingKeyForScale:(double)a0 withSuffix:(id)a1 inKeysSet:(id)a2;
- (id)bestMatchingKeyForSrcset:(id)a0;
- (id)keysForScale:(double)a0 withSuffix:(id)a1;
- (id)matchingKeyForScale:(double)a0 withSuffix:(id)a1 inKeysSet:(id)a2;

@end
