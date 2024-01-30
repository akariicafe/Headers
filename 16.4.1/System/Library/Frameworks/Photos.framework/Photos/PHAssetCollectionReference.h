@class NSArray;

@interface PHAssetCollectionReference : PHCollectionReference

@property (readonly, copy, nonatomic) NSArray *transientAssetReferences;
@property (readonly, nonatomic) long long assetCollectionType;
@property (readonly, nonatomic) long long assetCollectionSubtype;

+ (id)representedType;
+ (id)referenceForAssetCollection:(id)a0;

- (BOOL)transient;
- (void).cxx_destruct;
- (id)_transientCollectionInLibrary:(id)a0;
- (id)dictionaryForReferenceType:(id)a0;
- (id)initWithDictionary:(id)a0 referenceType:(id)a1;
- (id)initWithLocalIdentifier:(id)a0 libraryURL:(id)a1 type:(long long)a2 subtype:(long long)a3;
- (id)initWithLocalIdentifier:(id)a0 libraryURL:(id)a1 type:(long long)a2 subtype:(long long)a3 assetReferences:(id)a4 transientIdentifier:(id)a5 transientTitle:(id)a6;

@end
