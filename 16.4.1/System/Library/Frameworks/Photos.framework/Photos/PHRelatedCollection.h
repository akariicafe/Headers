@class NSArray, NSString, PHObject;

@interface PHRelatedCollection : PHAssetCollection {
    long long _titleCategory;
}

@property (readonly, nonatomic) NSArray *debugInfo;
@property (readonly, nonatomic) PHObject *relatedObject;
@property (readonly, copy, nonatomic) NSString *highlightLocalIdentifier;
@property (readonly, nonatomic) NSArray *momentLocalIdentifiers;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned long long relationType;

+ (id)_relatedCollectionsFromInfos:(id)a0 relatedObject:(id)a1 photoLibrary:(id)a2;
+ (id)_transientCollectionListWithCollectionsRelatedToLocalIdentifiers:(id)a0 relationType:(unsigned long long)a1 options:(id)a2 photoLibrary:(id)a3;
+ (id)transientCollectionListWithCollectionsRelatedToObject:(id)a0 relationType:(unsigned long long)a1 options:(id)a2;
+ (id)transientCollectionListWithCollectionsRelatedToPersons:(id)a0 relationType:(unsigned long long)a1 options:(id)a2;

- (BOOL)canPerformEditOperation:(long long)a0;
- (id)localizedSubtitle;
- (void).cxx_destruct;
- (id)initTransientWithAssets:(id)a0 orFetchResult:(id)a1 relationType:(unsigned long long)a2 relatedObject:(id)a3 title:(id)a4 subtitle:(id)a5 titleCategory:(long long)a6 highlightLocalIdentifier:(id)a7 momentLocalIdentifiers:(id)a8 debugInfo:(id)a9;
- (long long)titleCategory;

@end
