@class NSArray;

@interface PHCollectionListReference : PHCollectionReference

@property (readonly, copy, nonatomic) NSArray *transientCollectionReferences;
@property (readonly, nonatomic) long long collectionListType;
@property (readonly, nonatomic) long long collectionListSubtype;

+ (id)representedType;
+ (id)referenceForCollectionList:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 referenceType:(id)a1;
- (id)dictionaryForReferenceType:(id)a0;
- (id)_transientCollectionInLibrary:(id)a0;
- (id)initWithLocalIdentifier:(id)a0 libraryURL:(id)a1 collectionListType:(long long)a2 collectionListSubtype:(long long)a3 collectionReferences:(id)a4 transientIdentifier:(id)a5 transientTitle:(id)a6;
- (id)initWithLocalIdentifier:(id)a0 libraryURL:(id)a1 collectionListType:(long long)a2 collectionListSubtype:(long long)a3;
- (BOOL)transient;

@end
