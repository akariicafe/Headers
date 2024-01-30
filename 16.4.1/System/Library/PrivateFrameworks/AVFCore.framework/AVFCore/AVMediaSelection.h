@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (id)propertyList;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_selectedMediaArray;
- (id)_initWithDeferredLoadingOfAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_groupDictionaries;
- (void)_createDefaultMediaSelectionOptions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (unsigned long long)hash;
- (void)_loadiVarsIfNeeded;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;
- (id)description;
- (id)_initWithAsset:(id)a0;
- (id)_internal;

@end
