@class NSMutableSet;

@interface TSKAnnotationAuthorStorage : TSPObject

@property (readonly, nonatomic) NSMutableSet *authors;

- (void)dealloc;
- (id)description;
- (void)addAuthor:(id)a0;
- (id)packageLocator;
- (BOOL)shouldDelayArchiving;
- (unsigned int)delayedArchivingPriority;
- (void)didLoadChildObjectFromDocumentSupport:(id)a0;
- (void)p_addAuthor:(id)a0 isFromDocumentSupport:(BOOL)a1;
- (id)authorWithName:(id)a0;
- (void)removeAuthor:(id)a0;
- (id)nextAuthorColor;
- (void)didAddAuthorRelationshipToDocument;
- (void)didRemoveAuthorRelationshipFromDocument;

@end
