@class PFWeakContainer;

@interface _PFWeakContainerSentenal : NSObject {
    PFWeakContainer *_container;
}

+ (void)initialize;

- (oneway void)release;
- (void)associateWithObject:(id)a0;
- (void)dealloc;
- (BOOL)isAssociatedWithObject:(id)a0;
- (void)removeAssociationWithObject:(id)a0;
- (id)initWithContainer:(id)a0;
- (void)clearContainer;

@end
