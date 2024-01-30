@class NSArray, AVAssetTrackGroupInternal;

@interface AVAssetTrackGroup : NSObject <NSCopying> {
    AVAssetTrackGroupInternal *_assetTrackGroup;
}

@property (readonly, nonatomic) NSArray *trackIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)_assetComparisonToken;
- (id)initWithAsset:(id)a0 trackIDs:(id)a1;

@end
