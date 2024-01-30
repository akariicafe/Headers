@class NSString;

@interface PHCollectionReference : PHObjectReference

@property (readonly, nonatomic) BOOL transient;
@property (readonly, copy, nonatomic) NSString *transientIdentifier;
@property (readonly, copy, nonatomic) NSString *transientTitle;

+ (id)representedType;

- (void).cxx_destruct;
- (id)_transientCollectionInLibrary:(id)a0;
- (id)dictionaryForReferenceType:(id)a0;
- (id)initWithDictionary:(id)a0 referenceType:(id)a1;
- (id)initWithLocalIdentifier:(id)a0 libraryURL:(id)a1 transientIdentifier:(id)a2 transientTitle:(id)a3;

@end
