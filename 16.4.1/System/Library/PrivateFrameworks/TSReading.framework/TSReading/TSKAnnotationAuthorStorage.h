@class NSMutableSet;

@interface TSKAnnotationAuthorStorage : TSPObject

@property (readonly, nonatomic) NSMutableSet *authors;

- (void)dealloc;
- (id)description;
- (id)authorWithName:(id)a0;
- (id)nextAuthorColor;
- (void)addAuthor:(id)a0;
- (unsigned int)delayedArchivingPriority;
- (void)didAddAuthorRelationshipToDocument;
- (void)didLoadChildObjectFromDocumentSupport:(id)a0;
- (void)didRemoveAuthorRelationshipFromDocument;
- (void)p_addAuthor:(id)a0 isFromDocumentSupport:(BOOL)a1;
- (id)packageLocator;
- (void)removeAuthor:(id)a0;
- (BOOL)shouldDelayArchiving;

@end
