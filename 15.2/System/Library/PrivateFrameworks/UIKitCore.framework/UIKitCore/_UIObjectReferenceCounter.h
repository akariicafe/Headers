@class NSCountedSet;

@interface _UIObjectReferenceCounter : NSObject {
    NSCountedSet *_objectReferences;
}

- (void)incrementReferenceForObject:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (void)decrementReferenceForObject:(id)a0 invalidationHandler:(id /* block */)a1;
- (id)init;

@end
