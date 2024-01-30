@class NSSet, NSMutableSet;

@interface TSKAnnotationAuthorStorage : TSPObject

@property (retain, nonatomic) NSMutableSet *mutableAuthors;
@property (readonly) NSSet *authors;

- (id)description;
- (void).cxx_destruct;
- (id)nextAuthorColor;
- (void)addAuthor:(id)a0;
- (unsigned int)delayedArchivingPriority;
- (void)didAddAuthorRelationshipToDocument;
- (void)didRemoveAuthorRelationshipFromDocument;
- (id)packageLocator;
- (void)removeAuthor:(id)a0;
- (BOOL)shouldDelayArchiving;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)authorInStorageAddingAuthorIfNecessary:(id)a0;
- (id)authorInStorageMatchingAuthor:(id)a0;
- (id)authorInStorageMatchingAuthor:(id)a0 name:(id)a1;
- (id)authorsMatchingPrivateIDs:(id)a0;
- (id)currentAuthorColorWithKey:(id)a0;
- (long long)indexForColorKey:(id)a0 usedColors:(id)a1;
- (long long)p_hashCodeForColorKey:(id)a0;
- (BOOL)p_withToleranceDoesColorSet:(id)a0 containColor:(id)a1;
- (id)preferredAuthorMatchingPrivateID:(id)a0 name:(id)a1;
- (id)preferredAuthorMatchingPrivateIDs:(id)a0 name:(id)a1;

@end
