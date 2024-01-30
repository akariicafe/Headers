@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (id)propertyList;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_selectedMediaArray;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_groupDictionaries;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;
- (id)_initWithAsset:(id)a0;
- (id)_internal;

@end
