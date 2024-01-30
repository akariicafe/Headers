@class NSSet, NSMutableSet;

@interface TSKAnnotationAuthorStorage : TSPObject

@property (retain, nonatomic) NSMutableSet *mutableAuthors;
@property (readonly) NSSet *authors;

- (id)description;
- (void).cxx_destruct;
- (void)addAuthor:(id)a0;
- (id)packageLocator;
- (BOOL)shouldDelayArchiving;
- (unsigned int)delayedArchivingPriority;
- (void)removeAuthor:(id)a0;
- (id)nextAuthorColor;
- (void)didAddAuthorRelationshipToDocument;
- (void)didRemoveAuthorRelationshipFromDocument;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)authorInStorageAddingAuthorIfNecessary:(id)a0;
- (id)authorInStorageMatchingAuthor:(id)a0;
- (id)authorsMatchingPrivateID:(id)a0;
- (BOOL)p_withToleranceDoesColorSet:(id)a0 containColor:(id)a1;
- (long long)p_hashCodeForColorKey:(id)a0;
- (long long)indexForColorKey:(id)a0 usedColors:(id)a1;
- (id)preferredAuthorMatchingPrivateID:(id)a0 name:(id)a1;
- (id)currentAuthorColorWithKey:(id)a0;

@end
