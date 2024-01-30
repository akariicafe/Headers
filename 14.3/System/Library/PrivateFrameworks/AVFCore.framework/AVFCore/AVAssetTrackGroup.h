@class NSArray, AVAssetTrackGroupInternal;

@interface AVAssetTrackGroup : NSObject <NSCopying> {
    AVAssetTrackGroupInternal *_assetTrackGroup;
}

@property (readonly, nonatomic) NSArray *trackIDs;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)_assetComparisonToken;
- (BOOL)isEqual:(id)a0;
- (id)initWithAsset:(id)a0 trackIDs:(id)a1;

@end
