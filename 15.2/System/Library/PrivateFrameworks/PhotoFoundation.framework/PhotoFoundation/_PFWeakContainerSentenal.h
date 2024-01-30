@class PFWeakContainer;

@interface _PFWeakContainerSentenal : NSObject {
    PFWeakContainer *_container;
}

+ (void)initialize;

- (id)initWithContainer:(id)a0;
- (void)dealloc;
- (void)clearContainer;
- (BOOL)isAssociatedWithObject:(id)a0;
- (void)associateWithObject:(id)a0;
- (void)removeAssociationWithObject:(id)a0;
- (oneway void)release;

@end
