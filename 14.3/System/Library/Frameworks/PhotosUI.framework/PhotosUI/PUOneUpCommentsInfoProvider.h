@interface PUOneUpCommentsInfoProvider : NSObject

+ (BOOL)hasUserLikedDisplayAsset:(id)a0;
+ (unsigned long long)likeCountForDisplayAsset:(id)a0;
+ (unsigned long long)commentCountForDisplayAsset:(id)a0;
+ (void)toggleLike:(BOOL)a0 forDisplayAsset:(id)a1;
+ (BOOL)_canHandleDisplayAsset:(id)a0;

@end
