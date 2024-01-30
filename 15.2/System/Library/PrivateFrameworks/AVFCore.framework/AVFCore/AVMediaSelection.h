@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (id)propertyList;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;
- (id)_selectedMediaArray;
- (id)_initWithAsset:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)_loadiVarsIfNeeded;
- (void)_createDefaultMediaSelectionOptions;
- (id)_groupDictionaries;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_initWithDeferredLoadingOfAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_internal;
- (unsigned long long)hash;
- (void)dealloc;

@end
